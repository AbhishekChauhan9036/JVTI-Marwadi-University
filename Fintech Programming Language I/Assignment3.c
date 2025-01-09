// Develop a function to convert temperature from Celsius to Fahrenheit or vice versa.
// int C = 10;
// °F = (°C × 9/5) + 32
//    = (C * 9/5) + 32

#include <stdio.h>
int celsiusToFarnehight(int C)
{
    int F = (C * 9/5) + 32;
    return F;
}
int main()
{
    int C = 10;
    int ans = celsiusToFarnehight(C);
    printf("%d",ans);
    return 0;
}