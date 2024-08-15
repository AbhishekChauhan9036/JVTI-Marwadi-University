#include<stdio.h>
int main()
{
    /** 
     * Variable naming convantion
    int $num1=10;
    int 1num=10;
    int num1=10; True
    int n$m1= 10;
    int _num1=10;  True
    */
    int a=10;
    int b=20;
    a++;a++;
    printf("%d\n",++a);
    a--;a++;
    printf("%d\n",a++);
    --a;--a;--a;
    printf("%d\n",--a);
    return 0;
}