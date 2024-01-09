#include <stdio.h>

#define MAXLINE 1000

int main()
{
    int c;
    int lastCharWasSpace = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!lastCharWasSpace)
            {
                putchar(c);
                lastCharWasSpace = 1;
            }
        }
        else
        {
            putchar(c);
            lastCharWasSpace = 0;
        }
    }

    return 0;
}
