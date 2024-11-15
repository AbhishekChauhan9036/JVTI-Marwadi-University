/*
1  4  10  22  46  94
*/
#include <stdio.h>
int main()
{
    int num = 1;
    while (num <= 100)
    {
        printf("%d ", num);
        num = (num * 2) + 2;
    }
    return 0;
}
