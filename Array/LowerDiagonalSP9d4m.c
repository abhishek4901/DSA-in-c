#include <stdio.h>

int main() {
    int i, j, n, m, count = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);

    // Proceed only if the matrix is square
    if (n == m) {
        int mat[50][50];

        printf("Enter the elements of the matrix:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        printf("The matrix is:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }

        // Check if matrix is lower Diagonal
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {  // Elements above the diagonal
                if (i<j && mat[i][j]!=0){
                    count++;
                }
            }
        }

        if (count == 0) {
            printf("Matrix is Lower Diagonal\n");
        } else {
            printf("Matrix is Not Lower Diagonal\n");
        }
    } else {
        printf("Matrix must be square to check for lower Diagonal(row = column).\n");
    }

    return 0;
}
