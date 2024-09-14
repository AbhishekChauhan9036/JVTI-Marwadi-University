/**
 * write a C program using switch-case to determine the grade based on a user-input
numerical score (0-100). The program should convert the score into a corresponding
grade (A, B, C, D, F) and handle scores outside the valid range with an error message.
*/

#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
        printf("A\n");
        break;
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
    default:
        if (marks > 100 || marks< 0)
        {
            printf("Invalid Input\n");
        }
        else
        {
            printf("Fail\n");
        }
        break;
    }
    return 0;
}
