#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define structure using typedef
typedef struct {
    int data;
    int priority;
} Element;


Element pq[MAX];  // Global queue and size
int size = 0;

int isEmpty() { // Function to check if queue is empty

    return size == 0;
}

// Function to check if queue is full
int isFull() {
    return size == MAX;
}

// Function to insert an element
void insert(int data, int priority) {
    if (isFull()) {
        printf("Queue is full!\n");
        return;
    }

    int i = size - 1;

    while (i >= 0 && pq[i].priority > priority) {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1].data = data;
    pq[i + 1].priority = priority;
    size++;

    printf("Inserted: %d (Priority: %d)\n", data, priority);
}

// Function to dequeue the element with highest priority
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }

    Element removed = pq[0];

    // Shift remaining elements
    for (int i = 0; i < size - 1; i++) {
        pq[i] = pq[i + 1];
    }
    size--;

    printf("Dequeued: %d (Priority: %d)\n", removed.data, removed.priority);
}

// Function to display the queue
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

// Main function with menu
int main() {
    int choice, data, priority;

    while (1) {
        printf("\n Priority Queue Menu \n");
        printf("1. Insert\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter priority (lower number = higher priority): ");
            scanf("%d", &priority);
            insert(data, priority);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
