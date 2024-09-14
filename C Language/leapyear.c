
/** 
100 = Not a Leap Year
1000 = Not a Leap Year
400 = a leap Year
2000 = is a Leap Year
2004 = is a Leap Year


year%400 == 0    is a Leap Year
2024%100 == 0    Not a leap Year
2024%4  == 0      is a leap year
*/

#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400 == 0){
        printf("is a Leap Year\n");
    }
    else if(year%100 ==0){
        printf("Not a leap Year\n");
    }
    else if(year%4 == 0){
        printf("is a Leap Year\n");
    }else{
        printf("Not a leap Year\n");
    }
    return 0;
}