#include "middle.h"

int itc_second_max_num(long long number)
{
    int max1=0, max2=0,c; number=abs(number);
    while (number>0)
    {
        c=number%10;
        if (c>max1)
        {
            max2=max1;
            max1=c;
        }
        else
            if(c>max2)
            max2=c;
        number=number/10;
    }
    return max2;
}
