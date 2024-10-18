#include <stdio.h>
#include <string.h>
int main()
{
    char fName[] = {'A', 'Y', 'U', 'S', 'H', ' ', '\0'};
    char lName[] = {'M', 'A', 'L', 'A', 'V', 'I', 'Y', 'A', '\0'};
    for (int i = 0; i < strlen(fName); i++)
    {
        printf("%c", fName[i]);
    }
    for (int i = 0; i < strlen(lName); i++)
    {
        printf("%c", lName[i]);
    }
    return 0;
}