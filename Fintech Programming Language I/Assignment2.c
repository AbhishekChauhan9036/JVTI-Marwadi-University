// Print this Pattern
// 50 49 48 47 46 45 44 43 42 41

// Square Pattern
// 2 4 8 16 32 64 128 256 512 1024 2048

// Fibbonacci Series
//  0 1 1 2 3 5 8 13

#include <stdio.h>
int main()
{
    int a = 0, b = 1, i = 1,next=0;
    while(i<=6){
        printf("%d",next);
        a=b;
        b=next;
        next = a+b;
        i++;
    }
    return 0;
}