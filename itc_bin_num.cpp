#include "middle.h"

long long itc_bin_num(long long number)
{
    long long nb=0;
    long long st=1;
    while (number>0)
    {
        nb+=number%2*st;
        st=st*10;
        number=number/2;
    }
    return nb;
}
