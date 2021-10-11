#include "middle.h"

long long itc_multi_num(long long number)
{
    int g=1; number = abs(number);
    while (number>0)
    {
        g*=number%10;
        number=number/10;
    }
    return g;
}
