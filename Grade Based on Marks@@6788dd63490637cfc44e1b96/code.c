// Your code here...

#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    if(input >=90) {
        printf("A");    
    } else if (90 > input >=80) {
        printf("B");
    } else if (80 > input >= 70) {
        printf("C");
    } else if (70 > input >= 60) { 
        printf("D");
    } else {
        printf("F")
    }
    return 0;
}
