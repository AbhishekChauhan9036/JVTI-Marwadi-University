#include <stdio.h>
// Function Definition
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int ans = sum(10, 20);
    printf("Sum of a and b is: %d",ans);
    return 0;
}

/**
 * Nature of the Function
 * 1) Take something return something  int sum(int a , int b)
 * 2) Take something return nothing      void sum(int a, int b)
 * 3) Take nothing return something      int sum()
 * 4) Take nothing return nothing           void sum()
 */