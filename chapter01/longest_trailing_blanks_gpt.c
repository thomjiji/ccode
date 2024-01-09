#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

int getline_m(char line[], int maxline); // avoid conflict with stdlib
void remove_trailing_blanks(char line[]);

int main()
{
    int len;            // current line length
    char line[MAXLINE]; // current input line

    while ((len = getline_m(line, MAXLINE)) > 0)
    {
        remove_trailing_blanks(line);
        if (line[0] != '\0') // check if line is not entirely blank
            printf("%s", line);
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

// remove_trailing_blanks: remove trailing blanks and tabs from a line
void remove_trailing_blanks(char line[])
{
    int i = 0;

    // Find the end of the string
    while (line[i] != '\0')
        ++i;

    // Move back from the null character to the last non-blank character
    --i;
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
        --i;

    // Add a newline character and null terminator to truncate the line
    line[++i] = '\n';
    line[++i] = '\0';
}
