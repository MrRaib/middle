#include "middle.h"

int itc_rev_bin_num(long long number)
{
    int st=1;
    int n=0;
    while (number>0)
    {
        n+=number%10*st;
        st=st*2;
        number=number/10;
    }
    return n;
}
