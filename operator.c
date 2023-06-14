#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    float result;

    printf("Enter the Number1: ");
    scanf("%f", &num1);

    printf("Enter the Operator: ");
    scanf(" %c", &operator);

    printf("Enter the Number2: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}