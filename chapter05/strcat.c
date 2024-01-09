#include <stdio.h>

char *strcat_pointer(char *s, const char *t)
{
    char *dest = s;

    // Move the pointer 'dest' to the end of the string 's'
    while (*dest != '\0')
    {
        dest++;
    }

    // Copy the string 't' to the end of 's'
    while ((*dest++ = *t++) != '\0')
        ;

    return s;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    printf("%s\n", strcat_pointer(str1, str2));
    printf("%s\n", str1);
}
