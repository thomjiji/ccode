#include <stdio.h>

void squeeze_s(char s1[], char s2[]);

int main()
{
    char word[] = "apple";
    squeeze_s(word, "pe");

    printf("%s", word);
}

// squeeze: delete all characters in s2 from s1
void squeeze_s(char s1[], char s2[])
{

    int i, j;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        while (s2[i] != '\0')
        {
            if (s1[i] != s2[i])
            {
                s1[j] = s1[i];
                j++;
            }
        }
    }
    s1[j] = '\0';
}
