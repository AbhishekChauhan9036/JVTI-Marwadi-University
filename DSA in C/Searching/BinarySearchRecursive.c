#include <stdio.h>

int binarySearchRecursive(int arr[], int l, int r, int x) {
    if (r >= l) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] > x)
            return binarySearchRecursive(arr, l, m - 1, x);
        return binarySearchRecursive(arr, m + 1, r, x);
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearchRecursive(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);
    return 0;
}
