#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char str1[] = {'A', 'Y', 'U', 'S', 'H', '\0'};
    char str2[100];
    for (i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("%s", str2);
    return 0;
}