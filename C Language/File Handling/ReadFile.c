#include <stdio.h>
int main()
{
    FILE *fp;
    char buffer[255];
    fp = fopen("example.txt", "r");
    while (fgets(buffer, 255, fp) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
