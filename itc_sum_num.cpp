#include "middle.h"

int itc_sum_num(long long number)
{
    int s=0; number = abs(number);
    while (number>0)
    {
        s+=number%10;
        number=number/10;
    }
    return s;
}
