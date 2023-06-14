#include <stdio.h>

int character_type(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;  
    } else if (ch >= 'a' && ch <= 'z') {
        return 2;   
    } else if (ch >= '0' && ch <= '9') {
        return 3;  
    } else if (ch >= 32 && ch <= 126) {
        return 4;  
    } else {
        return 5;  
    }
}

int main() {
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = character_type(ch);

    switch (result) {
        case 1:
            printf("Type: Uppercase letter\n");
            break;
        case 2:
            printf("Type: Lowercase letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Type: Unknown\n");
            break;
    }

    return 0;
}
