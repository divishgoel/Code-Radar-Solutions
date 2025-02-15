// Your code here...
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a > 0) {
        printf("Positive: %d\n" ,a);
    } else if (a < 0) {
        printf("Negative: %d\n",a);
    } else {
        printf("Zero");
    }
    return 0;




}