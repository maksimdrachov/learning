#include <stdio.h>

/*  Check each bit in a number is set or not
    and return the total count of the set bits */

int countSetBits(int N)
{
    int count = 0;

    /* (1 << i) = pow(2, i) */
    for (int i = 0; i < sizeof(int)*8; i++) {
        if (N & (1 << i))
            count++;
    }
    return count;
}

int main()
{
    int N = 15;

    printf("%d", countSetBits(N));
    return 0;
}