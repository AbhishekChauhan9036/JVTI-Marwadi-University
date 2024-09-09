// Write a C program that finds the largest of three numbers using nested if-else statements.

#include <stdio.h>
int main()
{
    int a = 1000, b = 30, c = 180;
    if (a >= b)
    {
        if (a >= c)
        {
            printf("a is the largest value: %d", a);
        }
        else
        {
            printf("c is the largest value: %d", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("b is the largest value: %d", b);
        }
        else
        {
            printf("c is the largest value: %d", c);
        }
    }

    return 0;
}