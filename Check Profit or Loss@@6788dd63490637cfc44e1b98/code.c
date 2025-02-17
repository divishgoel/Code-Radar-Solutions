// Your code here...
// Your code here...

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(a > b) {
        printf("Profit\n");
    } else if(b > a) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss");
    }
  
    return 0;
}
