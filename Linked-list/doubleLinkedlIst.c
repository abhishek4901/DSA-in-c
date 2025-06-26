#include<stdio.h>
#include<stdlib.h>

// Define the structure of a doubly linked list node
typedef struct DoublyLinkedList {
    int data;                  // Store the data in the node
    struct DoublyLinkedList* prev; // Pointer to the previous node
    struct DoublyLinkedList* next; // Pointer to the next node
} dlist;

// Global pointers to manage the doubly linked list
dlist *head = NULL, *temp = NULL, *newnode = NULL;

// Function to create a doubly linked list
void createList() {
    int n, value;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);  // Read number of nodes to be created

    for (int i = 1; i <= n; i++) {
        printf("Enter value of node no %d: ", i);  // Prompt to enter value for each node
        newnode = (dlist*)malloc(sizeof(dlist));  // Dynamically allocate memory for new node

        if (newnode == NULL) {  // Check if memory allocation fails
            printf("Memory allocation failed\n");
            return;  // Exit the function if memory allocation fails
        }

        scanf("%d", &value);  // Read the data for the current node
        newnode->data = value; // Set the data for the node
        newnode->prev = NULL;  // Set the previous pointer to NULL (will be updated later)
        newnode->next = NULL;  // Set the next pointer to NULL (to be updated later)

        // If the list is empty (head is NULL), this is the first node
        if (head == NULL) {
            head = newnode; // Make newnode the head of the list
            temp = head;    // Set temp to point to the first node
        } else {
            temp->next = newnode;  // Link the previous last node to the new node
            newnode->prev = temp;  // Link the new node's prev to the current last node
            temp = newnode;        // Update temp to point to the new last node
        }
    }
}

// Function to print the doubly linked list
void printList() {
    printf("\nDoubly Linked list: ");
    temp = head; // Start traversal from the head
    while (temp != NULL) {  // Loop through all the nodes in the list
        printf("%d ", temp->data);  // Print the data of the current node
        temp = temp->next;  // Move to the next node
    }
    printf("\n");
}

// Main function
int main() {
    createList();  // Call the createList function to create the doubly linked list
    printList();   // Call the printList function to display the doubly linked list
    return 0;      // End the program
}
