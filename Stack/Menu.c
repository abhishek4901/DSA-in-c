#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Check if full
int isFull() {
    return rear == SIZE - 1;
}

// Check if empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Enqueue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is Full. Cannot add %d\n", value);
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Dequeue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty. Cannot delete.\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

// Display queue
void display() {
    if (isEmpty()) {
        printf("Queue is Empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue (Add)\n");
        printf("2. Dequeue (Remove)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
