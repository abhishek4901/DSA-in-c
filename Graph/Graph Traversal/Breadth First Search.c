#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int queue[MAX], front = -1, rear = -1;

void enqueue(int v) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

void bfs(int start, int n) {
    visited[start] = 1;
    enqueue(start);

    while (front <= rear) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 1; i <= n; i++) {
            if (adj[node][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}
