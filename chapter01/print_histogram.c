/*
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state, length;
    int lengths[10]; // Assuming words of length 1 to 10

    state = OUT;
    length = 0;

    // Initialize lengths array, set each element (length) of lengths to 0.
    for (int i = 0; i < 10; ++i)
    {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') // 如果 c 等于这里列出的任何一个字符，
        {
            state = OUT; // 那么意味着目前已经离开上一个 word，把 state 设为 OUT。

            // 因为已经离开了上一个 word，我们现在把在 loop though 上个 word 时记下来的 length
            if (length > 0 && length <= 10)
            {
                ++lengths[length - 1];
            }

            length = 0;
        }
        else
        {
            state = IN;
            ++length;
        }
    }

    // Display the vertical histogram
    printf("Word Lengths Histogram (Vertical):\n");

    for (int i = 10; i > 0; --i)
    {
        printf("Length %d: ", i);
        for (int j = 0; j < 10; ++j)
        {
            if (lengths[j] >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
