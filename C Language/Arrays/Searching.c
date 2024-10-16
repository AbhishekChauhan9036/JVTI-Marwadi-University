#include <stdio.h>
// Function Definition
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {10, 7, 6, 3, -10};
    int target = 3;
    int index = linearSearch(arr, 5, target); // Function Call
    printf("%d", index);
    return 0;
}