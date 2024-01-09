#include <stdio.h>

// Function to delete characters in s1 that match any character in s2
void squeeze(char s1[], char s2[])
{
    int i, j, k;
    int match; // Flag to indicate if a character in s1 matches any character in s2

    // Iterate through each character in s1
    for (i = j = 0; s1[i] != '\0'; i++)
    {
        match = 0; // Reset match flag for each character in s1

        // Iterate through each character in s2 to check for a match
        for (k = 0; s2[k] != '\0'; k++)
        {
            // If a match is found, set the match flag and break from the loop
            if (s1[i] == s2[k])
            {
                match = 1;
                break;
            }
        }

        // If no match is found, retain the character in s1 and update the write index
        if (!match)
        {
            s1[j++] = s1[i];
        }
    }

    // Add a null terminator to the modified string
    s1[j] = '\0';
}

int main()
{
    char str1[] = "hello";
    char str2[] = "lo";

    squeeze(str1, str2);

    printf("Result: %s\n", str1);

    return 0;
}
