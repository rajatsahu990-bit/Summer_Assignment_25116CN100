#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[10][10], B[10][10], Diff[10][10];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtract matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}