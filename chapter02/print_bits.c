#include <stdio.h>

void printBinary(unsigned int num)
{
    if (num == 0)
    {
        printf("0");
        return;
    }

    int binary[32]; // Assuming a 32-bit integer
    int index = 0;

    while (num > 0)
    {
        binary[index++] = num % 2;
        num /= 2;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
}

int main()
{
    unsigned int number1 = 89; // Replace with your integer
    unsigned int number2 = 87; // Replace with your integer

    printf("Binary representation of %u: ", number1);
    printBinary(number1);
    printf("\n");
    printf("Binary representation of %u: ", number2);
    printBinary(number2);
    printf("\n");

    return 0;
}
