#include <string.h>

/* strlen: return length of string s*/
int strlen_custom_1(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
    {
        n++;
    }

    return n;
}

/* strlen: return length of string s*/
int strlen_custom_2(char *s)
{
    char *p = s; // create a local pointer, keep the original pointer `s` unchanged.

    while (*p != '\0')
    {
        p++;
    }

    return p - s;
}

int main() {}
