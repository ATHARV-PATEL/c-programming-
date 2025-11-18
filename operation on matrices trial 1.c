#include <stdio.h>

int main() {
    int rows, cols, choice;

    // Ask user for matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[10][10], B[10][10], result[10][10]; // Max size 10x10 for safety

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Menu
    printf("\nChoose an operation:\n");
    printf("1. Display Matrix A and B\n");
    printf("2. Add Matrices\n");
    printf("3. Subtract Matrices (A - B)\n");
   ;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nMatrix A:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++)
                    printf("%d ", A[i][j]);
                printf("\n");
            }

            printf("\nMatrix B:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++)
                    printf("%d ", B[i][j]);
                printf("\n");
            }
            break;

        case 2:
            printf("\nSum of matrices:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = A[i][j] + B[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("\nSubtraction of matrices (A - B):\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = A[i][j] - B[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
