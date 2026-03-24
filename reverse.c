#include <stdio.h>

int main()
{
    int n, i, temp;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the array
    int start = 0;
    int end = n - 1;
    
    while(start < end)
    {
        // Swap arr[start] and arr[end]
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
    
    // Print reversed array
    printf("\nReversed Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}