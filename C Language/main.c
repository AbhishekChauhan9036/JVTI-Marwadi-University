#include<stdio.h>
#include<stdbool.h>  
int main()
{
    //printf("\tHello World!\n");
    //printf("\tIndia\n");
    /*
        this
        is
        multiline
        comment
    */

    int salary = -10001;  // 4 byte
    float prize = -12.90; // 4 byte
    double pi = 3.1416; // 8 byte
    char ch = 'A';   // 1 byte
    bool x = true; // 1 byte
    long long a= 100998777; // 8 byte
    printf("Salary is: %d\n",sizeof(salary));
    printf("Prize is: %d\n",sizeof(prize));
    printf("Value of Pi is: %d\n",sizeof(pi));
    printf("Value of Ch is: %d\n",sizeof(ch));
    printf("boolean size is: %d\n",sizeof(x));

    return 0;
}
