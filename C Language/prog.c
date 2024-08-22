#include<stdio.h>
int main() {
    int a = 5;
    int b = ++a + a-- ;
    int c = ++b + b--;
    printf("%d\n%d", b,c);
    return 0;
}
