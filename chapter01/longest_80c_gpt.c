#include <stdio.h>
#define MAXLINE 1000  // maximum input line size
#define MIN_LENGTH 80 // minimum line length to be printed

int getline_m(char line[], int maxline); // avoid conflict with stdlib

int main()
{
    int len;            // current line length
    char line[MAXLINE]; // current input line

    while ((len = getline_m(line, MAXLINE)) > 0)
    {
        if (len > MIN_LENGTH)
        {
            printf("-------------\n");
            printf("\tPrinting line (length %d): %s", len, line);
        }
        else
        {
            printf("-------------\n");
            printf("\tLine not printed (length %d): %s", len, line);
        }
    }

    return 0;
}

// getline: read a line into s, return length
int getline_m(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}
