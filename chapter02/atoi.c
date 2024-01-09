#include <stdio.h>

// atoi: convert a string of digits into its numeric equivalent
int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');

    return n;
}

int main()
{
    int out = atoi("392314");
    printf("%d", out);
}
