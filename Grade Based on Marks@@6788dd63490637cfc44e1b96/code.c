// Your code here...

#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    if(input >=90) {
        printf("A\n");    
    } else if (90 > input >=80) {
        printf("B\n");
    } else if (80 > input >= 70) {
        printf("C\n");
    } else if (70 > input >= 60) { 
        printf("D\n");
    } else {
        printf("F\n");
    }
    return 0;
}
