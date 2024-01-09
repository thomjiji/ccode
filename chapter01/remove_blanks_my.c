#include <stdio.h>

#define MAXLINE 1000

// 通过跟踪空格 whitespace 的数量来决定是否要 output 当前遇到的空格
int main()
{
    int c;
    int whitespace; // 声明一个变量 whitespace
    int loopc;

    whitespace = 0; // 初始化成 0
    loopc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') // 如果 c 是空格，那么在 output 这个空格之前，
        {
            if (whitespace == 0 && loopc > 0) // 我需要 check 目前已经输出的空格的数量，如果还没有输出过空格字符，
            {
                putchar(c); // 那么输出当前遇到的这个空格字符。同时，我还需要检查目前 loop 的次数，如果目前迭代次数为 0，那么当前的这个 loop 是第一次迭代。第一次迭代就遇到空格字符的话，
            }
            else // 那么直接跳过，什么都不做。因为这是在输入的字符流最开头的空格字符。我们需要把它们 trim 掉。
            {
                continue;
            }

            whitespace += 1; // 输出完了需要在 whitespace 上加 1，来记录已经输出的空格的数量。
            loopc += 1;
        }
        else if (c != ' ' && whitespace > 0) // 如果 c 不是空格，同时 whitespace 又大于 1 的话（意味着不久之前已经输出过一个空格字符），
        {
            whitespace = 0; // 那么把 whitespace 设为 0。这里主要的思路是：如果当前的字符 c 不是空格字符，同时 whitespace 大于 1，意味着这时来到了一系列空格字符的末尾，和下一个 word 的开头：_ _ w。
                            // 那么此时需要把 whitespace 归零，准备下一个连续空格字符的检测。
            putchar(c);     // 同时输出当前这个字符（因为它不是空格字符，那直接输出就行了）。
            loopc += 1;
        }
        else
        {
            putchar(c); // 如果以上条件都不满足：c 既不是空格，whitespace 也是 0 的状态。那么意味着此时在 word 当中：正在一个一个的处理 word 中的字符：w o r d。那么单纯输出这些字符就行了。
            loopc += 1;
        }
    }
}
