#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0, odd_count = 0;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    // Display results
    printf("\nTotal Even numbers = %d\n", even_count);
    printf("Total Odd numbers  = %d\n", odd_count);

    return 0;
}