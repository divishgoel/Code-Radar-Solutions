// Your code here...
#include <stdio.h>

void trafficLight(char signal) {
    switch (signal) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input! Please enter R, G, or Y.\n");
    }
}

int main() {
    char signal;
    scanf(" %c", &signal);
    
    trafficLight(signal);
    
    return 0;
}
