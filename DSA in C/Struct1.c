#include<stdio.h>

struct str {
    int a;
    char c;
    float f;
    char ch[5];
};

int main() {
    struct str var1 = { 1, 'A', 1.00, "abhi" };
    printf("%d\n",var1.a);
    return 0;
}
