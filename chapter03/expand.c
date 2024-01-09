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
        if (s1[i] == '-' && s1[i + 1] != '-' && s1[i + 1] != '\0')
        {
            char start_char = s1[i - 1] + 1; // The first character to be expanded
            char end_char = s1[i + 1];       // The last char in the endpoint of the range (s1)

            while (start_char <= end_char)
            {
                s2[j++] = start_char++;
            }

            i += 2;
        }
        else
        {
            s2[j++] = s1[i++];
        }
    }

    s2[j] = '\0';
}

int main()
{
    char range[] = "-a-h-m5-9-";
    char expanded[100];

    expand(range, expanded);
    printf("%s\n", expanded);
}
