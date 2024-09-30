#include <stdio.h>
int main()
{
    for (int i = 1, k = 0; i <= 11; i++)
    {
        i <= 6 ? k++ : k--;
        for (int j = 1; j <= 11; j++)
        {
            if (j <= 7 - k || j >= 5 + k)
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