#include <stdio.h>

#define MAX 10

int adj[MAX][MAX];    // adjacency matrix
int visited[MAX];     // visited array

// DFS function
void dfs(int v, int n) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 1; i <= n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }
}

int main() {
    int n ;  // number of vertices
    int edges ; // number of edges
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    int u, v;

    // Add edges
    adj[1][2] = 1;
    adj[2][1] = 1;

    adj[1][3] = 1;
    adj[3][1] = 1;

    adj[3][4] = 1;
    adj[4][3] = 1;

    printf("DFS starting from vertex 1:\n");
    dfs(1, n);

    return 0;
}
