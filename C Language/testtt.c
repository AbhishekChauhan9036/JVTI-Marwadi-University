#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char k = 'A';
        for (int j = 1; j <= 7; j++)
        {
            (j <= 5 - i || j >= 3 + i) ? (printf("%c", k), j < 4 ? k++ : k--) : (printf(" "), j == 4 ? k-- : 0);
        }
        printf("\n");
    }
    return 0;
}
