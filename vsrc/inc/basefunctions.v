function integer clogb2(//get width of a data
    input integer data
);
begin
    if(data == 0)
        clogb2 = 1;
    else if(data != 0)
        for(clogb2 = 0; data > 0;clogb2 = clogb2 + 1)
            data = data >> 1;
end
endfunction

