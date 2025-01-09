#include <stdio.h>
int main()
{
    int i = 1,count =0;
    while (i<=100)
    {
        printf("Hello World!\n");
        count++;
        ++i;
    }
    printf("%d",count);
    return 0;
}