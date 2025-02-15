// Your code here
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a % 5 && a % 11) {
        printf("Divisible\n");
   } else {
        printf("Not Divisible\n");
   }
   return 0;


}