#include "middle.h"

bool itc_mirror_num(long long number)
{
    int k=number; number=abs(number); long long n=0;
    while (number>0)
    {
        n=n*10+number%10;
        number=number/10;
    }
    if (k==n)
        return true;
    else
        return false;
}
