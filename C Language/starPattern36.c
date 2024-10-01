#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k = 0;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%d ", k);
                k = k + i - 1;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}