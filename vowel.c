#include <stdio.h>

int is_vowel(char ch) {
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = is_vowel(ch);

    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
