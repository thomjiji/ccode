#include <stdio.h>

// 函数将整数转换为二进制字符串
void printBinary(unsigned int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }

    // 递归调用
    printBinary(n >> 1);
    printf("%u", n & 1);
}

int main()
{
    int s = 86;
    int b = 85;

    printf("Binary representation of s: ");
    printBinary(s);

    printf("\nBinary representation of b: ");
    printBinary(b);

    printf("\nBinary representation of s & b: ");
    printBinary(s & b);

    return 0;
}
