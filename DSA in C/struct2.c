#include<stdio.h>

struct str2 {
    int i;
    char ch;
    float pi;
} var; 

int main() {
    var.i = 10;
    var.ch = 'A';
    var.pi = 3.14;

    printf("i = %d\n", var.i);
    printf("ch = %c\n", var.ch);
    printf("pi = %f\n", var.pi);

    return 0;
}
