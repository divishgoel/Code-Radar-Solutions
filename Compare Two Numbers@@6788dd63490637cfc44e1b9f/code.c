// Your code here...#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    // Compare the two numbers
    if (num1 == num2) {
        printf("The numbers are equal.\n");
    } else if (num1 > num2) {
        printf("%d is larger than %d.\n", num1, num2);
    } else {
        printf("%d is larger than %d.\n", num2, num1);
    }

    return 0;
}