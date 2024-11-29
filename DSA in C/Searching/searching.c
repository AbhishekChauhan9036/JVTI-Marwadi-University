// int arr[] = {12, 18, 19, 21, -7, 7, 0, 3};
// int target = 21;

// Linear Search
// worst Case TC = O(n)
// best Case TC = O(1) or Constant
// Average Case TC= O(n)

#include <stdio.h>

int linearSearch(int arr[], int target, int n)
{
    for (int i = 0; i < n; i++)
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
    int arr[] = {12, 18, 19, 21, -7, 7, 0, 3};
    int target = -7;
    int n = sizeof(arr) / sizeof(arr[1]);
    int ans = linearSearch(arr, target, n);
    printf("%s", ans != -1 ? "Yes our target element found" : "Element Not Found");
    return 0;
}