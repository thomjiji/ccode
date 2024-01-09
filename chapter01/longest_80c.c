#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

int getline_m(char line[], int maxline); // avoid conflict with stdlib
void copy(char to[], char from[]);

// print lines longer than 80 characters
int main()
{
    int len;                      // current line length
    char line[MAXLINE];           // current input line
    char longer_than_80[MAXLINE]; // line longer than 80 characters save here

    while ((len = getline_m(line, MAXLINE)) > 0)
    {
        if (len > 80)
        {
            copy(longer_than_80, line);
        }
    }

    printf("%s", longer_than_80);

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

// copy: copy 'from' into 'to'; assume 'to' is big enough
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
