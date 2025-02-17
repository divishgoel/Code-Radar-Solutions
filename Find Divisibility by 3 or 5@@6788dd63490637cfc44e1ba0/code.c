// Your code here...
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check divisibility
    if (number % 3 == 0 && number % 5 == 0) {
        printf("Divisible by Both");
    } else if (number % 3 == 0) {
        printf("Divisible by 3");
    } else if (number % 5 == 0) {
        printf("Divisible by 5");
    } else {
        printf("Not Divisible ");
    }

    return 0;
}