// Your code here...
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check if the number is between 1 and 100 (inclusive)
    if (number >= 1 && number <= 100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}