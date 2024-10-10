#include <stdio.h>
int main()
{
    for (int i = 1, k = 0; i <= 5; i++)
    {
        i <= 3 ? k++ : k--;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 4 - k || j >= 2 + k)
            {
                printf("*");
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