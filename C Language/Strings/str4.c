#include <stdio.h>
#include <string.h>
int main()
{
    char fName[] = {'A', 'Y', 'U', 'S', 'H', ' ', '\0'};
    char lName[100];
    strcpy(lName, fName);
    puts(lName);
    return 0;
}