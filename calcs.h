#include <stdio.h>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Division by zero is not allowed.\n");
        return 0; // You can return any suitable value in this case.
    }
}

int main() {
    double num1, num2;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
    
    double result = divide(num1, num2);
    if (result != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, result);
    }
    
    return 0;
}


