#include <stdio.h>

int htoi(char s[]);

int main()
{
    char h[] = "0x1a3f";
    // htoi(h);
    // htoi(h);
    // printf("%d", htoi(h));
    // printf("%c %d\n", h[1], h[1]);
    printf("%d", htoi(h));
}

int htoi(char s[])
{
    int result, i;

    i = 0;
    result = 0;
    while (s[i] != '\0')
    {

        // skip "0x" and "0X" characters
        if (s[i] == '0' || s[i] == 'x' || s[i] == 'X')
        {
            i++;
            continue;
        }

        // check for invalid hex characters
        if (s[i] > 'f' || s[i] < '0' || (s[i] < 'a' && s[i] > 'F'))
        {
            printf("Invalid hex value: %c", s[i]);
            return 1;
        }

        if (s[i] == 'A')
            result = result * 16 + 10;
        else if (s[i] == 'B')
            result = result * 16 + 11;
        else if (s[i] == 'C')
            result = result * 16 + 12;
        else if (s[i] == 'D')
            result = result * 16 + 13;
        else if (s[i] == 'E')
            result = result * 16 + 14;
        else if (s[i] == 'F')
            result = result * 16 + 15;
        else if (s[i] == 'a')
            result = result * 16 + 10;
        else if (s[i] == 'b')
            result = result * 16 + 11;
        else if (s[i] == 'c')
            result = result * 16 + 12;
        else if (s[i] == 'd')
            result = result * 16 + 13;
        else if (s[i] == 'e')
            result = result * 16 + 14;
        else if (s[i] == 'f')
            result = result * 16 + 15;
        else
        {
            result = result * 16 + (s[i] - '0');
        }

        i++;
    }

    return result;
}
