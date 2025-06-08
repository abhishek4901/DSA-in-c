#include<stdio.h>
#include<stdlib.h>

// Define the structure of a linked list node
typedef struct LinkedList {
    int data;
    struct LinkedList* next;
} list;

// Declare global pointers
list *head = NULL, *temp = NULL, *newnode = NULL;

// Function to create a linked list
void createList() {
    int n, value;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value of node no %d: ", i);
        newnode = (list*)malloc(sizeof(list));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode; // First node
        } else {
            temp->next = newnode; // Link the last node
        }
        temp = newnode; // Update temp to the new last node
    }
}

// Function to insert a new node at the beginning
void insertAtBeginning() {
    int value;
    printf("\nEnter value to insert at beginning: ");
    scanf("%d", &value);

    newnode = (list*)malloc(sizeof(list));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = value;
    newnode->next = head; // New node points to current head
    head = newnode;       // Head updated to new node
}

// Function to print the linked list
void printList() {
    printf("\nLinked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    createList();         // Step 1: Create the list
    printList();          // Print initial list

    insertAtBeginning();  // Step 2: Insert new node at beginning
    printList();          // Print updated list

    return 0;
}
