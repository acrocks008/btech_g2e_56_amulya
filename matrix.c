#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int equal = 1;  // Flag: 1 means equal, 0 means not equal

    // Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols];

    // Input first matrix
    printf("\nEnter elements of First Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Second Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if matrices are equal
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                equal = 0;   // Matrices are not equal
                break;
            }
        }
        if(equal == 0)
            break;
    }

    // Display result
    if(equal == 1)
        printf("\nBoth matrices are EQUAL\n");
    else
        printf("\nBoth matrices are NOT EQUAL\n");

    return 0;
}