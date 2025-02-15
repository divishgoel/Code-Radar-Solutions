#include <stdio.h>

int main() {
    char input;
    printf("Enter a character: ");
    scanf(" %c", &input); 
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
        input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') {
        printf("Vowel\n");
    }
    else if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        printf("Consonant\n");
    }
    else if (input >= '0' && input <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}
