/*
 * Compares the character strings s and t, and returns negative,
 * zero or positive if s is lexicographically less than, equal to,
 * or greater than t.
 */

/* strcmp: return <0 if s < t, 0 if s == t, >0 if s > t */
int strcmp_custom(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
    {
        if (s[i] == '\0')
        {
            return 0;
        }
    };

    return s[i] - t[i];
}

/* strcmp: return <0 if s < t, 0 if s == t, >0 if s > t */
int strcmp_ptr(char *s, char *t)
{
    for (; *s == *t; s++, t++)
    {
        if (*s == '\0')
        {
            return 0;
        }
    }
    return *s - *t;
}

int main() {}
