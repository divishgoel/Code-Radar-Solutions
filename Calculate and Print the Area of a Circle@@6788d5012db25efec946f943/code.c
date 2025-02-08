#include <stdio.h>
#include <math.h>

int main() {
    int r;
    float area;
    scanf("%d", &r);
    area = M_PI * pow(r, 2);
    printf("Area: %.2f\n", area);
    return 0;
}