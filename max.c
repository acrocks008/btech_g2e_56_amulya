#include <stdio.h>

int main() {
    int n, i;
    int max;
    
    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Finding maximum element
    max = arr[0];  // Assume first element is maximum
    
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Maximum element in the array is: %d\n", max);
    
    return 0;
}