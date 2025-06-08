#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in a circular linked list
typedef struct CircularLinkedList {
    int data;
    struct CircularLinkedList* next;
} clist;

// Global pointer to the head of the list
clist* head = NULL;

// Function to create a circular linked list with n nodes
void createList() {
    int n, value;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("List size should be greater than 0.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter value of node no %d: ", i);
        clist* newnode = (clist*)malloc(sizeof(clist));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        // If it's the first node, make it the head and point to itself
        if (head == NULL) {
            head = newnode;
            newnode->next = head;  // Circular link
        } else {
            // Traverse to the last node and link it to the new node
            clist* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;  // Maintain the circular structure
        }
    }
}

// Function to print the circular linked list
void printList() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    clist* temp = head;
    printf("\nCircular Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Function to insert a new node at the end
void insertAtEnd() {
    int value;
    printf("Enter value to insert at the end: ");
    scanf("%d", &value);

    clist* newnode = (clist*)malloc(sizeof(clist));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = value;
    newnode->next = head;

    if (head == NULL) {
        head = newnode;
        newnode->next = head;  // Circular link
    } else {
        clist* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// Menu function
void menu() {
    int choice;
    while (1) {
        printf("\nCircular Linked List Menu:\n");
        printf("1. Create List\n");
        printf("2. Insert at End\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createList();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                printList();
                break;
            case 4:
                printf("Exiting...\n");
                return;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Main function
int main() {
    menu();
    return 0;
}
