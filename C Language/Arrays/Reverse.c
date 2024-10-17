#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 3, 3, 3, 4};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[4 - i]);
    }
    return 0;
}