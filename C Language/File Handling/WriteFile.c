#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Batman.txt", "w");
    fprintf(ptr, "Relax I'm here\n");
    fprintf(ptr, "I'm a Batman\n");
    fclose(ptr);
    return 0;
}