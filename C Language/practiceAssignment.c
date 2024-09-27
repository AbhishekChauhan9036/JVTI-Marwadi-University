/*8. Write a program to calculate the factorial of a given number using a while loop.

5 =  1 x 2 x 3 x 4 x 5  = 120
5  =  5 x 4 x 3 x 2 x 1 = 120

*/

#include <stdio.h>
int main()
{
    int n, i = 1, mul = 1;
    scanf("%d", &n);
    while (n >= i)
    {
        mul = mul * i; // 1  2  6  24   120
        i++;
    }
    printf("Factorial of %d is %d:", n, mul);
    return 0;
}