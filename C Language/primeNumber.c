/*
 2  3 5 7 11 13 17 19 23 29
 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

 29

 29%6 == 0

*/
#include <stdbool.h>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a Prime Number\n");
        return 0;
    }
    int i = 2;
    bool isPrime = true;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }
    printf("%d: %s", n, isPrime ? "is a Prime Number\n" : "is not a Prime Number\n");
    return 0;
}