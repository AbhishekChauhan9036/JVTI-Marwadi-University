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
    struct Student s1 = {9, "Shubham Mehta", 9873635823, "Gotham City"}, s2;
    s2=s1;
    printf("%d\n", s1.RollNum);
    printf("%s\n", s1.Name);
    printf("%lld\n", s1.contactDetails);
    printf("%s\n", s1.Address);
    printf("%s\n", s2.Address);

    return 0;
}