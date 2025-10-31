#include<stdio.h>
int main(){
    int a, b, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit with error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with error code
    }
    printf("Result: %d\n", result); 
    return 0;
}