#ifndef __APB_SLAVECORE_H__
#define __APB_SLAVECORE_H__

#include "systemc.h"
#include "../BaseModules/myMessagePrintf.h"
#include <fstream>
#include <iostream>
#include "../BaseModules/InjectFile.h"
#include <string>

#define APB_SLAVE_PORT(width, aligment) \
sc_in<bool> APB_CLK; \
sc_in<bool> APB_RESETn; \
sc_out<sc_uint<width>> APB_RDATA; \
sc_out<bool> APB_READY; \
sc_out<bool> APB_SLVERR; \
sc_in<sc_uint<aligment>> APB_STRB; \
sc_in<sc_uint<3>> APB_PROT; \
sc_in<sc_uint<width>> APB_ADDR;\
sc_in<bool> APB_ENABLE; \
sc_in<bool> APB_WRITE; \
sc_in<sc_uint<width>> APB_WDATA;\
sc_in<bool> APB_SEL


template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
class APB_SlaveCore : public sc_module
{
public:
    APB_SLAVE_PORT(W, Alig);
    sc_event beWriteEvent, beReadEvent;
    void setOutputRegsPtr(int num, sc_uint<W>* ptr);
    sc_uint<W> regAddr();
    sc_uint<W> regData(int id);
    void setRegData(int id, sc_uint<W> data);
    sc_uint<W> regClampMask(int id, bool HorL);
    

private:
    clockDomainPtr mainClockPtr;

    sc_uint<W> inputRegsData[RegNum];
    sc_uint<W>* outputRegsPtr[RegNum];
    sc_uint<W> regsClampH[RegNum];
    sc_uint<W> regsClampL[RegNum];
    sc_uint<W>* initialRegs;
    sc_uint<RegNumWidth> regAddrBuf;
    void initializeRegs();

    bool enable;
    ifstream faultInjectFile;

public:
    SC_HAS_PROCESS(APB_SlaveCore);
    APB_SlaveCore(sc_module_name name, clockDomainPtr clkp, sc_uint<W>* initPtr, std::string faultInjectFilePath) :
        sc_module(name), mainClockPtr(clkp), initialRegs(initPtr), regAddrBuf(0), enable(true)
    {
        // AHB_RESP.write(0);
        // AHB_RDATA.write(0);
        initializeRegs();
        for(int i=0; i<RegNum; i++){
            outputRegsPtr[i] = &inputRegsData[i];
            regsClampH[i] = 0;
            regsClampL[i] = 0;
        }
        SC_THREAD(WorRThread);
        SC_METHOD(ResetThread);
        sensitive << APB_RESETn;
        if(!faultInjectFilePath.empty()){
            faultInjectFile.open(faultInjectFilePath, ios::in);
            if (!faultInjectFile.is_open())
            {
                cout << "读取文件失败" << endl;
            }else{
                SC_THREAD(FaultInjectThread);
            }
        }
        
    }

private:
    void ResetThread();
    void WorRThread();
    void FaultInjectThread();
};

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
void APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::setOutputRegsPtr(int num, sc_uint<W>* ptr)
{
    if(num < RegNum){
        outputRegsPtr[num] = ptr;
    }
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
sc_uint<W> APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::regAddr()
{
    return regAddrBuf;
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
sc_uint<W> APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::regData(int id)
{
    if(id < RegNum){
        return inputRegsData[id];
    }
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
void APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::setRegData(int id, sc_uint<W> data)
{
    if(id < RegNum){
        inputRegsData[id] = data;
        inputRegsData[id] |= regsClampH[id];
        inputRegsData[id] &= ~regsClampL[id];
    }
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
sc_uint<W> APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::regClampMask(int id, bool HorL)
{
    if(id < RegNum){
        if(HorL){
            return regsClampH[id];
        }else{
            return regsClampL[id];
        }
    }
    
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
void APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::initializeRegs()
{
    for(int i=0; i<RegNum; i++){
        inputRegsData[i] = 0;
    }
    if(initialRegs != nullptr){
        unsigned int num = initialRegs[0];
        sc_uint<W> addrBuf = 0;
        for(int i=1; i<num+1; i++){
            addrBuf = initialRegs[i*2-1];
            inputRegsData[addrBuf] = initialRegs[i*2];
        }
    }
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
void APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::ResetThread()
{
    if(APB_RESETn.read()){
        enable = true;
    }else{
        enable = false;
        initializeRegs();
    }
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
void APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::WorRThread()
{
    wait(SC_ZERO_TIME);
    // sc_uint<W> regAddr = 0;
    APB_RDATA.write(0);
    APB_READY.write(0);
    APB_SLVERR.write(0);
    sc_uint<W> r = 0;
    while(1){
        wait(APB_SEL.posedge_event());
        if(!enable){
            continue;
        }
        r = APB_ADDR.read();
        switch (Alig)
        {
            case 2: r >>= 1; break;
            case 4: r >>= 2; break;
            case 8: r >>= 3; break;
            default: break;
        }
        regAddrBuf = r.range(RegNumWidth-1, 0);
        if(APB_WRITE.read() == 1){
            inputRegsData[regAddrBuf] = APB_WDATA.read();
            inputRegsData[regAddrBuf] |= regsClampH[regAddrBuf];
            inputRegsData[regAddrBuf] &= (~regsClampL[regAddrBuf]);
            // wait(APB_CLK.posedge_event());
            wait(APB_ENABLE.posedge_event());
            beWriteEvent.notify();
            APB_READY.write(true);
            // wait(APB_CLK.posedge_event());
            wait(APB_ENABLE.negedge_event());
            APB_READY.write(false);
        }
        else{
            // wait(APB_CLK.posedge_event());
            wait(APB_ENABLE.posedge_event());
            APB_READY.write(true);
            r = *outputRegsPtr[regAddrBuf];
            r |= regsClampH[regAddrBuf];
            r &= (~regsClampL[regAddrBuf]);
            APB_RDATA.write(r);
            beReadEvent.notify();
            // wait(APB_CLK.posedge_event());
            wait(APB_ENABLE.negedge_event());
            APB_READY.write(false);
        }
    }
}

template<int W, int Alig, int RegNum, int RegNumWidth, int Info>
void APB_SlaveCore<W, Alig, RegNum, RegNumWidth, Info>::FaultInjectThread()
{
    char buf[1024] = {0};
    unsigned int nowTime;
    unsigned int faultTime = 80;
    unsigned int faultRegID = 0;
    unsigned int faultMask = 0;
    char i = 0;
    faultInjectFile.getline(buf, sizeof(buf));
    while(faultInjectFile.getline(buf, sizeof(buf))){
        // std::cout << buf << std::endl;
        FlipTranselate(buf+4, &faultTime, &faultRegID, &faultMask);
        nowTime = (unsigned int)(sc_time_stamp().to_default_time_units());
        if(faultTime > nowTime){
            nowTime = faultTime - nowTime;
            wait(nowTime , SC_NS);
        }
        // PrintfInfomation(name(), "Fault Inject!!!The id is %u, the mask is %x, the type is %c\n", faultRegID, faultMask, buf[1]);
        switch (buf[1])
        {
        case 'x':
            inputRegsData[faultRegID] ^= faultMask;
            *(outputRegsPtr[faultRegID]) ^= faultMask;
            break;
        case '0':
            inputRegsData[faultRegID] &= (~faultMask);
            *(outputRegsPtr[faultRegID]) &= (~faultMask); 
            break;
        case '1':
            inputRegsData[faultRegID] |= faultMask;
            *(outputRegsPtr[faultRegID]) |= faultMask; 
            break;
        case 'a': //clamp 0
            inputRegsData[faultRegID] &= (~faultMask);
            *(outputRegsPtr[faultRegID]) &= (~faultMask); 
            regsClampL[faultRegID] |= faultMask;
            regsClampH[faultRegID] &= (~faultMask);
            break;
        case 'b'://clamp 1
            inputRegsData[faultRegID] |= faultMask;
            *(outputRegsPtr[faultRegID]) |= faultMask;
            regsClampH[faultRegID] |= faultMask;
            regsClampL[faultRegID] &= (~faultMask);
            break;
        case 'c':// cancel clamp
            regsClampH[faultRegID] &= (~faultMask);
            regsClampL[faultRegID] &= (~faultMask);
            break;
        default:
            inputRegsData[faultRegID] = faultMask;
            *(outputRegsPtr[faultRegID]) = faultMask;
            break;
        }
    }
}

#endif