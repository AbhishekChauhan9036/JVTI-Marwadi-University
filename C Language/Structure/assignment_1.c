#include <stdio.h>
#include <string.h>
struct Car
{
    char Brand[100];
    int Year;
    float Price;
};

int main()
{
    struct Car c1;
    strcpy(c1.Brand, "KIA");
    c1.Year = 2020;
    c1.Price = 20000.000;

    printf("%s\n", c1.Brand);
    printf("%d\n", c1.Year);
    printf("%f\n", c1.Price);
    return 0;
}