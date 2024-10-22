#include <stdio.h>
#include <string.h>
union Student
{
    int rollNum;             // 4 bytes
    char Name[13];           // 13 bytes
    long long int MobileNum; // 8 bytes
    char StreamName[10];     // 10 bytes
};
int main()
{
    union Student s1;
    s1.rollNum = 10;
    s1.MobileNum = 9598628521;
    strcpy(s1.Name, "Utsav Ranpara\0");
    printf("%d\n", s1.rollNum);
    printf("%lld\n", s1.MobileNum);
    printf("%s\n", s1.Name);
    return 0;
}