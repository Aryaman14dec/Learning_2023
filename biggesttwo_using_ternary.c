#include <stdio.h>

int biggest_number(int a, int b) {
    int bignumber = (a > b) ? a : b;
    return bignumber;
}

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = biggest_number(num1, num2);
    printf("The biggest number is: %d\n", result);

    return 0;
}
