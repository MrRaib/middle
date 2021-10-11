#include "middle.h"

int itc_null_count(long long number)
{
    int k=0; number=abs(number);
    while (number>0)
    {
        if (number%10==0)
            k++;
        number=number/10;
    }
    return k;
}
