#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the value of row & Col: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the values of matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}