#include <ctype.h>
#include <stdio.h>

int htoi(const char *s);

int main()
{
    // Test the htoi function
    printf("%d\n", htoi("1A"));     // Expected output: 26
    printf("%d\n", htoi("0x1A3F")); // Expected output: 6719

    return 0;
}

int htoi(const char *s)
{
    // Check if the string starts with "0x" or "0X"
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        s += 2; // Move the pointer past the "0x" or "0X" prefix

    int result = 0;

    // Process each character in the string
    for (int i = 0; isxdigit(s[i]); ++i)
    {
        char digit = tolower(s[i]); // Convert to lowercase for uniformity

        // Update the result for the current digit
        result = result * 16 + (isdigit(digit) ? digit - '0' : digit - 'a' + 10);
    }

    return result;
}
