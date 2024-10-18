#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

float calculateArea(struct Rectangle rect)
{
    return rect.length * rect.width;
}

int main()
{
    struct Rectangle rect;

    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &rect.length, &rect.width);

    printf("Area of the rectangle: %.2f\n", calculateArea(rect));

    return 0;
}
