#include <stdio.h>

// strlen: return length of s
int strlen_s(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }

    return i;
}

int main()
{
    char hello[] = "The value of a character constant is the numeric value of the character";

    printf("%u", strlen_s(hello));
}
