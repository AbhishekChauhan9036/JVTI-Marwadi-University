#include <stdio.h>
int main()
{
    int num1, num2;
    char c;
    scanf("%d %d %c", &num1, &num2, &c);
    if (c == '+')
    {
        printf("%d", num1 + num2);
    }
    else if (c == '-')
    {
        printf("%d", num1 - num2);
    }

    else if (c == '*')
    {
        printf("%d", num1 * num2);
    }
    else if (c == '/')
    {
        printf("%d", num1 / num2);
    }

    else
    {
        printf("Apne dusra operator Enter kar diya hai please enter a correct symbol");
    }
    return 0;
}