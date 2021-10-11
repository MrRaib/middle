#include "middle.h"

int itc_min_num(long long number)
{
    int r=10; number = abs(number);
    while (number>0)
    {
        if (number%10<r)
        {
            r=number%10;
        }
        number=number/10;
    }
    return r;
}
