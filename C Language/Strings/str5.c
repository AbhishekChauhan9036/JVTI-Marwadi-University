/**String Practice Challenge

1) Write a C program to find the length of a string without using the strlen() function.

2) Write a C program to copy one string to another using a loop (without using the strcpy() function).

3) Write a C program to concatenate two strings without using the strcat() function.

4) Write a C program to compare two strings without using the strcmp() function.

5) Write a C program to count the number of vowels and consonants in a given string.

6) Write a C program to reverse a string without using any inbuilt functions.

7) Write a C program to check whether a given string is a palindrome or not.

8) Write a C program to remove all the spaces from a given string.

9) Write a C program to convert a string to uppercase without using the strupr() function.

10) Write a C program to count the number of words in a given string.
**/

#include <stdio.h>
#include <string.h>
int main()
{
    char fName[] = {'A', 'Y', 'U', 'S', 'H', '\0'};
    int count = 0;
    for (int i = 0; fName[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}