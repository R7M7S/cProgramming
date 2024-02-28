#include <stdio.h>

int main()
{
    char oper;
    int num1, num2;
    printf("selection one operator + - * /\n");
    scanf("%c", &oper);
    printf("Enter two numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    switch (oper)
    {
    case '+':
        printf("answare : %d\n", num1 + num2);
        break;
    case '*':
        printf("answare : %d\n", num1 * num2);
        break;
    case '-':
        printf("answare : %d\n", num1 - num2);
        break;
    case '/':
        printf("answare : %d\n", num1 / num2);
        break;
    default:
        printf("Please select a Valid option");
        break;
    }

    return 0;
}