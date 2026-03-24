#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare array
    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];        // Calculate sum
    }

    // Calculate average
    avg = sum / n;

    // Display results
    printf("\nSum of array elements = %.2f\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}