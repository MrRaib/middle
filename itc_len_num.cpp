#include "middle.h"

int itc_len_num(long long number)
{
    int k=0; number=abs(number);
    while (number>0)
        {
            k++;
            number=number/10;
        }
    return k;
}
