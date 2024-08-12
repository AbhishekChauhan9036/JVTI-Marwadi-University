#include <stdio.h>

/*1. Basic Variable Declaration: Write a C program to declare two integer 
variables, assign them values, and print their sum.*/
int main() {
    int firstNumber = 10;
    int secondNumber = 20;
    int sum = firstNumber + secondNumber;
    printf("Sum: %d\n", sum);
    return 0;
}



/*2. Variable Initialization: What is the difference between declaring a 
variable and initializing a variable? Provide an example.*/
/*
    Declaration: Declaring a variable means informing the compiler about the variable's type and name.
    Initialization: Initializing a variable means assigning an initial value to the variable.
    Example:
    int number; // Declaration
    number = 10; // Initialization
*/



/*3. Arithmetic Operators: Write a C program that accepts two numbers from the user
 and performs addition, subtraction, multiplication, division, and modulus operations on them.*/
int main() {
    int firstNumber, secondNumber;
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    printf("Addition: %d\n", firstNumber + secondNumber);
    printf("Subtraction: %d\n", firstNumber - secondNumber);
    printf("Multiplication: %d\n", firstNumber * secondNumber);
    printf("Division: %d\n", firstNumber / secondNumber);
    printf("Modulus: %d\n", firstNumber % secondNumber);
    return 0;
}



/*4. Increment and Decrement Operators: Explain the difference between the 
pre-increment (++x) and post-increment (x++) operators. Illustrate with a C program.*/
int main() {
    int number = 5;
    printf("Pre-increment: %d\n", ++number); 
    printf("Post-increment: %d\n", number++); 
    printf("After post-increment: %d\n", number); 
    return 0;
}




/*5. Compound Assignment Operators: Write a C program that uses compound assignment
 operators (e.g., +=, -=, *=, /=) to modify the value of a variable.*/
int main() {
    int number = 10;
    number += 5; 
    printf("After += 5: %d\n", number);
    number -= 3; 
    printf("After -= 3: %d\n", number);
    number *= 2; 
    printf("After *= 2: %d\n", number);
    number /= 4;
    printf("After /= 4: %d\n", number);
    return 0;
}



/*6. Relational Operators: Create a C program that compares two integers using 
relational operators (e.g., ==, !=, >, <, >=, <=) and prints the result.*/
int main() {
    int firstNumber = 15, secondNumber = 20;
    printf("firstNumber == secondNumber: %d\n", firstNumber == secondNumber);
    printf("firstNumber != secondNumber: %d\n", firstNumber != secondNumber);
    printf("firstNumber > secondNumber: %d\n", firstNumber > secondNumber);
    printf("firstNumber < secondNumber: %d\n", firstNumber < secondNumber);
    printf("firstNumber >= secondNumber: %d\n", firstNumber >= secondNumber);
    printf("firstNumber <= secondNumber: %d\n", firstNumber <= secondNumber);
    return 0;
}



/*7. Logical Operators: Write a C program that accepts three integers and checks if all 
of them are positive using logical operators (&&, ||, !)*/
int main() {
    int firstNumber, secondNumber, thirdNumber;
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    printf("Enter the third number: ");
    scanf("%d", &thirdNumber);
    if (firstNumber > 0 && secondNumber > 0 && thirdNumber > 0) {
        printf("All numbers are positive.\n");
    } else {
        printf("Not all numbers are positive.\n");
    }
    return 0;
}



/*8. Type Casting: Explain the concept of type casting in C with an example 
where you cast a float variable to an int variable.
Type Casting: Type casting is converting a variable from one data type to another.*/
int main() {
    float floatingNumber = 9.8;
    int integerNumber;
    integerNumber = (int)floatingNumber;
    printf("The float value: %f\n", floatingNumber);
    printf("The integer value after casting: %d\n", integerNumber);
    return 0;
}




/*9. Operator Precedence: What is operator precedence? Write a C program to
 demonstrate how different operator precedence affects the result of an expression.
Operator Precedence: Operator precedence defines the order in which operators are evaluated in an expression.*/
int main() {
    int result = 10 + 20 * 3; 
    printf("Result: %d\n", result);
    return 0;
}




/*10. Swapping Variables: Write a C program to swap the values of two integer variables
 using a temporary variable and without using a temporary variable (using arithmetic operations).*/
int main() {
    int firstNumber = 5, secondNumber = 10;
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    printf("After swapping using temporary variable - First: %d, Second: %d\n", firstNumber, secondNumber);
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    printf("After swapping without temporary variable - First: %d, Second: %d\n", firstNumber, secondNumber);
    return 0;
}
