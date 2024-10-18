#include <stdio.h>
#include <string.h>
struct Student
{
    int RollNum;
    char Name[100];
    long long int contactDetails;
    char Address[100];
};

int main()
{
    struct Student s1;
    s1.RollNum = 9;
    strcpy(s1.Name, "Shubham Mehta");
    s1.contactDetails = 9873635823;
    strcpy(s1.Address, "Gotham City");

    printf("%d\n", s1.RollNum);
    printf("%s\n", s1.Name);
    printf("%lld\n", s1.contactDetails);
    printf("%s\n", s1.Address);
    return 0;
}