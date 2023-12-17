#include "calc.h"

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