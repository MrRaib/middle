#include "middle.h"

int itc_mirror_count(long long number)
{
    int k=9; number=abs(number);
    for (long long i=10; i<=number; i++)
        if (itc_mirror_num(i))
            k++;
    return k;
}
