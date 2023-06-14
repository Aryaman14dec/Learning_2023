#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1 << 0;
            break;
        case 2:
            num &= ~(1 << 30);   
            break;
        case 3:
            num ^= 1 << 15;   
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return -1;
    }

    return num;
}

int main() {
    int number, operationType, result;

    printf("Enter the integer (32 bits): ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, 3): ");
    scanf("%d", &operationType);

    result = bit_operations(number, operationType);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
