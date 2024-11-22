// ABCBA
// 121
// 12321
// Sohan
// MACAM
// ABCDEDCBA

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char str[100] = {'A', 'B', 'C', 'B', 'A', '\0'};
    bool check = true;
    for (int i = 0; i < strlen(str)/2; i++)
    {
        if (str[i] != str[strlen(str) - i - 1])
        {
            check = false;
            break;
        }
    }
    printf("%s", check ? "Palindrome" : "Not Palindrome");
    return 0;
}


// SHUBHAM
// MAHBUHS