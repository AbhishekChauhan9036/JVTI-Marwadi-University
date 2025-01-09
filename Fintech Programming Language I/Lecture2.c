#include <stdio.h>
int main()
{
    int i = 1, count = 0;
    do
    {
        printf("Hello World!\n");
        count++;
        ++i;
    } while (i <= 5);
    printf("%d", count);
    return 0;
}