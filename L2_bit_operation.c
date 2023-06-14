#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    switch (oper_type) {
        case 1:
            num |= (1 << (pos + 1)) | (1 << pos);  
            break;
        case 2:
            num &= ~((1 << (pos + 2)) | (1 << (pos + 1)) | (1 << pos));  
            break;
        case 3:
            num ^= (1 << 31);   
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return -1;
    }

    return num;
}

int main() {
    int number, operationType, position, result;

    printf("Enter the integer (32 bits): ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, 3): ");
    scanf("%d", &operationType);

    printf("Enter the position: ");
    scanf("%d", &position);

    result = bit_operations(number, operationType, position);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
