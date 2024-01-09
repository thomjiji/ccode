#include <stdio.h>
#include <string.h>

// reverse : reverse string s in place
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) // 第一个分号前面的逗号就是所谓的 comma operator
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

// int main()
// {
//     char out[] = "apple";
//     reverse(out);
//     printf("%s", out);
// }
