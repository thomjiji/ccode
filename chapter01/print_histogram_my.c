/*
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORDS 100

int main()
{
    int c, nw, nc, state;
    int lengths[10];
    char *wp[100];

    state = OUT;
    nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            putchar(c);
        }
    }
}
