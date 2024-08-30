// Write a C program that finds the largest of three numbers using nested if-else statements

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is greater than b and c: %d\n",a);
    }
    else if (b > a && b > c)
    {
        printf("b is greater than a and c: %d\n",b);
    }
    else
    {
        printf("c is greater than b and a: %d\n",c);
    }
    return 0;
}



