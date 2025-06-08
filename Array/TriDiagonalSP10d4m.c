#include <stdio.h>

int isTridiagonal(int matrix[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // If element is not on main, upper, or lower diagonal
            if (j != i && j != i + 1 && j != i - 1) {
                if (matrix[i][j] != 0) {
                    return 0; // Not tridiagonal
                }
            }
        }
    }
    return 1; // Tridiagonal
}

int main() {
    int matrix[10][10];
    int n;

    printf("Enter size of square matrix : ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (isTridiagonal(matrix, n)) {
        printf("The matrix is a Tridiagonal Sparse Matrix.\n");
    } else {
        printf("The matrix is not a Tridiagonal Sparse Matrix.\n");
    }

    return 0;
}
