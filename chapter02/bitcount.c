#include <stdio.h>

// bitcount: count 1 bits in x
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;

    return b;
}

int main()
{
    printf("%d", bitcount(30));
}
