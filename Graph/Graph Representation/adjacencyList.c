#include <stdio.h>
#include <stdlib.h>

int main() {  
    int vertices, edges, i;  
   
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
 
    printf("Enter number of edges: "); 
    scanf("%d", &edges);

    // Create an array of pointers to store adjacency list
    int* adjList[vertices + 1];  // using 1-based indexing
    int adjCount[vertices + 1]; // to keep track of number of connections per vertex

    // Initialize
    for (i = 1; i <= vertices; i++) {
        adjList[i] = (int*)malloc(vertices * sizeof(int)); // max possible edges
        adjCount[i] = 0;
    }

    // Input edges
    for (i = 0; i < edges; i++) {
        int u, v;
        printf("Enter edge %d (format: u v): ", i + 1);
        scanf("%d %d", &u, &v);

        adjList[u][adjCount[u]++] = v;
        adjList[v][adjCount[v]++] = u; // because undirected
    }

    // Print adjacency list
    printf("\nAdjacency List:\n");
    for (i = 1; i <= vertices; i++) {
        printf("%d: ", i);
        for (int j = 0; j < adjCount[i]; j++) {
            printf("%d ", adjList[i][j]);
        }
        printf("\n");
    }

    return 0;
}
