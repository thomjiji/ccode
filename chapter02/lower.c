#include <stdio.h>

// lower: convert c to lowercase; ASCII only
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main()
{
    int integerValue;
    double doubleValue = 3.14293849;

    integerValue = doubleValue;

    printf("%d", integerValue);
}
