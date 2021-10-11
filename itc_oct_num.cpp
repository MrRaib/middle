#include "middle.h"

long long itc_oct_num(long long number)
{
    long long oc=0;
    long long st=1;
    while (number>0)
    {
        oc+=number%8*st;
        st=st*10;
        number=number/8;
    }
    return oc;
}
