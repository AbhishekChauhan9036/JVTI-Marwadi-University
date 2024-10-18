#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    gets(s);
    puts(s);
    int len = strlen(s);
    printf("   %d",len);
    return 0;
}