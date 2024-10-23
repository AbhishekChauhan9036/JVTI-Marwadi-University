#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("example.txt", "w");
    fprintf(fp, "This is a file handling example.\n");
    fputs("This is another line.\n", fp);
    fclose(fp);
    return 0;
}
