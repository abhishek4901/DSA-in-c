#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define structure using typedef
typedef struct {
    int data;
    int priority;
} Element;

// Global priority queue and size
Element pq[MAX];
int size = 0;

// Check if the queue is empty
int isEmpty() {
    return size == 0;
}

// Check if the queue is full
int isFull() {
    return size == MAX;
}

// Insert element into priority queue
void insert(int data, int priority) {
    if (isFull()) {
        printf("Queue is full!\n");
        return;
    }

    int i = size - 1;

    // Shift elements to maintain priority order
    while (i >= 0 && pq[i].priority > priority) {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1].data = data;
    pq[i + 1].priority = priority;
    size++;
    printf("Inserted: %d (Priority: %d)\n", data, priority);
}

// Dequeue (remove and return highest priority element)
Element dequeue() {
    Element removed;
    if (isEmpty()) {
        printf("Queue is empty!\n");
        removed.data = -1;
        removed.priority = -1;
        return removed;
    }

    removed = pq[0];

    // Shift elements to the left
    for (int i = 0; i < size - 1; i++) {
        pq[i] = pq[i + 1];
    }

    size--;
    return removed;
}

// Display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Priority Queue:\n");
    for (int i = 0; i < size; i++) {
        printf("Data: %d, Priority: %d\n", pq[i].data, pq[i].priority);
    }
}

// Main function to test
int main() {
    insert(40, 3);
    insert(20, 2);
    insert(10, 1);

    display();

    Element e = dequeue();
    if (e.data != -1)
        printf("Dequeued: %d (Priority: %d)\n", e.data, e.priority);

    display();

    return 0;
}
