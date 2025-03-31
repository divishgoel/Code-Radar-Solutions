#include <stdio.h>

int findMaxFrequency(int arr[], int n) {
    int max_freq = 0;
    int result = -1;
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        // Skip if this element was already counted
        if (arr[i] == -1) continue;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }
        
        if (count > max_freq) {
            max_freq = count;
            result = arr[i];
        } 
        else if (count == max_freq) {
            // If another element has same max frequency, set result to -1
            if (result != -1 && arr[i] != result) {
                result = -1;
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    // printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    // printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_freq_element = findMaxFrequency(arr, n);
    
    if (max_freq_element == -1) {
        printf("-1\n");
    } else {
        printf("%d", max_freq_element);
    }
    
    return 0;
}