// Demonstrate the concept of arithmetic operators.
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    return 0;
}


// Evaluate the Booleans algebra different formulas in c.
int main() {
    int x = 1, y = 0;
    // AND operation
    printf("x AND y: %d\n", x && y);
    // OR operation
    printf("x OR y: %d\n", x || y);
    // NOT operation
    printf("NOT x: %d\n", !x);
    printf("NOT y: %d\n", !y);
    return 0;
}


// Calculate the area of rectangle using c.
int main() {
    int length = 5, width = 10;
    int area = length * width;
    printf("Area of Rectangle: %d\n", area);
    return 0;
}



// Calculate the simple interest using c.
int main() {
    float principal = 1000, rate = 5, time = 2;
    float simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);
    return 0;
}


// Calculate the square of given number in c.
int main() {
    int number = 4;
    int square = number * number;
    printf("Square of %d: %d\n", number, square);
    return 0;
}

// Calculate the compound interest of rectangle using c.
#include <math.h>
int main() {
    float principal = 1000, rate = 5, time = 2, n = 1;
    float compound_interest = principal * pow((1 + rate/(100*n)), n*time);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}

// Demonstrate the concept of type casting in c.
int main() {
    int a = 5, b = 2;
    float result;
    // Implicit type casting
    result = a / b;
    printf("Result without type casting: %f\n", result);
    // Explicit type casting
    result = (float)a / b;
    printf("Result with type casting: %f\n", result);
    return 0;
}

// Show the given number is positive or negative.
int main() {
    int number = -10;
    
    if (number > 0) {
        printf("%d is Positive\n", number);
    } else if (number < 0) {
        printf("%d is Negative\n", number);
    } else {
        printf("%d is Zero\n", number);
    }
    return 0;
}

// Show the given number is even or odd.
int main() {
    int number = 5;
    if (number % 2 == 0) {
        printf("%d is Even\n", number);
    } else {
        printf("%d is Odd\n", number);
    }
    return 0;
}
