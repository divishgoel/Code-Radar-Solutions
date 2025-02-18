// Your code here...
#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    // Taking input from the user
    scanf("%lf %lf %c", &num1, &num2, &op); 

    // Performing the operation
    if (op == '+') {
        printf("%lf\n", num1 + num2);
    } else if (op == '-') {
        printf("%lf\n", num1 - num2);
    } else if (op == '*') {
        printf("%lf\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0)
            printf("%lf\n", num1 / num2);
        else
            printf("Error! Division by zero is not allowed.\n");
    } else {
        printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
