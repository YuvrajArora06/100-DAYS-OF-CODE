//wap to implement a basic calculator that performs addition, subtraction, multiplication, and division based on user input.
#include <stdio.h>  
int main() {    
    int num1, num2;    
    char operator;    
    float result;

    // Input two numbers and an operator
    printf("Enter first number: ");    
    scanf("%d", &num1);    

    printf("Enter an operator (+, -, *, /): ");    
    scanf(" %c", &operator);    
    
    printf("Enter second number: ");    
    scanf("%d", &num2);

    // Perform calculation based on the operator
    switch (operator) {    
        case '+':    
            result = num1 + num2;    
            printf("%d + %d = %.2f\n", num1, num2, result);    
            break;    
        case '-':    
            result = num1 - num2;    
            printf("%d - %d = %.2f\n", num1, num2, result);    
            break;    
        case '*':    
            result = num1 * num2;    
            printf("%d * %d = %.2f\n", num1, num2, result);    
            break;    
        case '/':    
            if (num2 != 0) {    
                result = (float)num1 / num2;    
                printf("%d / %d = %.2f\n", num1, num2, result);    
            } else {    
                printf("Error: Division by zero is not allowed.\n");    
            }    
            break;    
        default:    
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");    
    }

    return 0;  
}