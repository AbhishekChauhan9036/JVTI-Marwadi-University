#include <stdio.h>
int main()
{
    FILE *ptr;
    char buffer[255];
    ptr = fopen("Batman.txt", "r");
    while(fgets(buffer, 255, ptr)!= NULL){
        printf("%s",buffer);
    }
    fclose(ptr);
    return 0;
}