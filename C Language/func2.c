#include <stdio.h>
// Function Definition
void sum(int a, int b)
{
    int c = a + b;
    printf("Sum of a and b is: %d\n", c);
}

void sub(int a, int b)
{
    int c = a - b;
    printf("Sub of a and b is: %d\n", c);
}

void mul(int a, int b)
{
    int c = a * b;
    printf("Mul of a and b is: %d\n", c);
}

void div(int a, int b)
{
    int c = a / b;
    printf("div of a and b is: %d\n", c);
}

int main()
{
    sum(10, 15); // Function Call
    sub(10, 15); // Function Call
    mul(10, 15); // Function Call
    div(10, 15); // Function Call
    return 0;
}