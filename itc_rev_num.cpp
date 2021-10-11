#include "middle.h"

int itc_rev_num(long long number)
{
    int k=0; number=abs(number); long long n=0;
    while (number>0)
    {
        n=n*10+number%10;
        number=number/10;
    }
    while (n>0)
        {
            k++;
            n=n/10;
        }
    return k;
}
