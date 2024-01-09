#include <string.h>

/* strcpt: copy t to s; array subscript versoin */
void strcpy_array(char *s, char *t)
{
    int i;

    i = 0;

    while ((s[i] = t[i]) != '\0')
        i++;
}

/* strcpy: copt t to s; pointer version 1 */
void strcpy_pointer_1(char *s, char *t)
{
    while ((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}

/* strcpy: copy t to s; pointer version 2*/
void strcpy_pointer_2(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}

int main()
{
}
