#include <stdio.h>

void squeeze(char s[], int c);

int main()
{
    char word[] = "apple";
    squeeze(word, 'p');

    printf("%s", word);
}

// squeeze: delete all 'c' from s
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
