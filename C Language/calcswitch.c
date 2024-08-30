#include <stdio.h>
int main()
{
    int num1, num2;
    char c;
    scanf("%d %d %c", &num1, &num2, &c);
    switch (c)
    {
    case '+':
        printf("Sum of num1 and num2 is %d", num1 + num2);
        break;
    case '-':
        printf("Sub of num1 and num2 is %d", num1 - num2);
        break;
    case '*':
        printf("Mul of num1 and num2 is %d", num1 * num2);
        break;
    case '/':
        printf("Div of num1 and num2 is %d", num1 / num2);
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}