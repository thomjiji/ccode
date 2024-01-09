#include <stdio.h>

int strend(char *s, char *t)
{
    int i, j;

    // Find the end of string s
    for (i = 0; s[i] != '\0'; i++)
        ;

    // Find the end of string t
    for (j = 0; t[j] != '\0'; j++)
        ;

    // Compare characters from the end of s and t
    while (j >= 0 && s[i] == t[j])
    {
        i--;
        j--;
    }

    // If j is -1, all characters in t matched with the end of s
    return (j == -1) ? 1 : 0;
}

int main()
{
    char s[] = "variable";
    char t[] = "eble";

    if (strend(s, t))
        printf("'%s' occurs at the end of '%s'\n", t, s);
    else
        printf("'%s' does not occur at the end of '%s'\n", t, s);

    return 0;
}
