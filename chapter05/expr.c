#include <stdio.h>
#include <stdlib.h> // For atoi

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

void push(int value)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        stack[++top] = value;
    }
    else
    {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    }
}

int pop()
{
    if (top >= 0)
    {
        return stack[top--];
    }
    else
    {
        fprintf(stderr, "Stack underflow\n");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        if (argv[i][0] >= '0' && argv[i][0] <= '9')
        {
            push(atoi(argv[i]));
        }
        else
        {
            int operand2 = pop();
            int operand1 = pop();

            switch (argv[i][0])
            {
            case '+':
                push(operand1 + operand2);
                break;
            case '-':
                push(operand1 - operand2);
                break;
            case '*':
                push(operand1 * operand2);
                break;
            case '/':
                if (operand2 != 0)
                {
                    push(operand1 / operand2);
                }
                else
                {
                    fprintf(stderr, "Error: Division by zero\n");
                    exit(EXIT_FAILURE);
                }
                break;
            default:
                fprintf(stderr, "Error: Invalid operator\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    if (top == 0)
    {
        printf("Result: %d\n", stack[top]);
        return 0;
    }
    else
    {
        fprintf(stderr, "Error: Invalid expression\n");
        return EXIT_FAILURE;
    }
}
