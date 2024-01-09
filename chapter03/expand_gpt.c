#include <stdio.h>

void expand(char s1[], char s2[])
{
    int i = 0, j = 0;

    if (s1[0] == '-')
    {
        s2[j++] = '-';
        i++;
    }

    while (s1[i] != '\0')
    {
        if (s1[i] == '-' && s1[i + 1] != '\0' && s1[i + 1] != '-')
        {
            char start = s1[i - 1] + 1; // Character after the hyphen
            char end = s1[i + 1];

            while (start <= end)
            {
                s2[j++] = start++;
            }

            i += 2; // Skip the hyphen and the character after it
        }
        else
        {
            s2[j++] = s1[i++];
        }
    }

    s2[j] = '\0'; // Null-terminate the result string
}

int main()
{
    char s1[] = "a-z0-9-";
    char s2[100];

    expand(s1, s2);

    printf("Original: %s\nExpanded: %s\n", s1, s2);

    return 0;
}
