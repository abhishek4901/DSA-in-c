#include <stdio.h>

int main() {
    int n, i, j;

    // Input number of vertices 
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
 
    // Declare adjacency matrix  
    int adjMatrix[n][n];   
  
    // Fill the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                adjMatrix[i][j] = 0;  // No self-loop
            else
                adjMatrix[i][j] = 1;  // Edge exists
        }
    }

    // Print the matrix
    printf("\nAdjacency Matrix of Complete Graph K%d:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
