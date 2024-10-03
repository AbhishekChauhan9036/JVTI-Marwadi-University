#include <stdio.h>
// Function Definition
void checkEven(int n)
{
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    checkEven(5);// Function Call
    return 0;
}