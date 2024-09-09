// Write a C program that finds the largest of three numbers using nested if-else statements.

#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 15;
    if (a > b && a > c)
    {
        printf("a is the largest number: %d", a);
    }
    else if (b > a && b > c)
    {
        printf("b is largest number: %d", b);
    }else{
        printf("C is largest number: %d",c);
    }
    return 0;
}