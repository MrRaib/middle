#include "middle.h"

int itc_max_num(long long number)
{
    int f=1; number = abs(number);
    while (number>0)
    {
        if (f<number%10)
        {
            f=number%10;
        }
        number=number/10;
    }
    return f;
}
