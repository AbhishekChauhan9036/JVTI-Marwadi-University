#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = {'K', 'U', 'S', 'H', 'A', 'L','\0'};
    char str[100];
    gets(str);                   // ye input ke liye use hota hai
    printf("%d\n", strlen(str)); // length ke liye use hota hai
    puts(str);                   // print krne ke liye
    return 0;
}