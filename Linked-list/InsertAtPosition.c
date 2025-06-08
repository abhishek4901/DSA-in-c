#include<stdio.h>   // Include standard input-output header for printf and scanf
#include<stdlib.h>  // Include standard library header for malloc and free

// Define the structure of a linked list node
typedef struct LinkedList {
    int data;                // Data field to store the value of the node
    struct LinkedList* next; // Pointer to the next node in the list
} list;

// Global pointers for linked list management
list *head = NULL, *temp = NULL, *newnode = NULL;

// Function to create a linked list
void createList() {
    int n, value; // Variables to store the number of nodes and node values
    printf("Enter the number of nodes: "); // Prompt user for the number of nodes
    scanf("%d", &n); // Read the number of nodes

    for (int i = 1; i <= n; i++) { // Loop to create 'n' nodes
        printf("Enter value of node no %d: ", i); // Prompt for the value of the current node
        newnode = (list*)malloc(sizeof(list)); // Allocate memory for a new node
        if (newnode == NULL) { // Check if memory allocation failed
            printf("Memory allocation failed\n"); // Print error message
            return; // Exit the function
        }

        scanf("%d", &value); // Read the value for the current node
        newnode->data = value; // Assign the value to the node's data field
        newnode->next = NULL;  // Set the next pointer of the new node to NULL

        if (head == NULL) { // If the list is empty
            head = newnode; // Make the new node the head of the list
        } else {
            temp->next = newnode; // Link the last node to the new node
        }
        temp = newnode; // Update temp to point to the last node
    }
}

// Function to insert a new node at a given position
void insertAtPosition() {
    int value, pos, i = 1; // Variables to store the value, position, and loop counter
    printf("\nEnter the position to insert the new node: "); // Prompt user for the position
    scanf("%d", &pos); // Read the position

    printf("Enter the value for new node: "); // Prompt user for the value of the new node
    scanf("%d", &value); // Read the value

    newnode = (list*)malloc(sizeof(list)); // Allocate memory for the new node
    if (newnode == NULL) { // Check if memory allocation failed
        printf("Memory allocation failed\n"); // Print error message
        return; // Exit the function
    }
    newnode->data = value; // Assign the value to the new node's data field
    newnode->next = NULL;  // Set the next pointer of the new node to NULL

    if (pos == 1) {  // Check if the position is the beginning of the list
        newnode->next = head; // Link the new node to the current head
        head = newnode;       // Update head to point to the new node
    } else {
        temp = head; // Start traversal from the head
        while (i < pos - 1 && temp != NULL) { // Traverse to the node before the desired position
            temp = temp->next; // Move to the next node
            i++; // Increment the counter
        }

        if (temp == NULL) { // Check if the position is out of range
            printf("Position out of range!\n"); // Print error message
            free(newnode); // Free the allocated memory for the new node
        } else {
            newnode->next = temp->next; // Link the new node to the next node
            temp->next = newnode;       // Link the previous node to the new node
        }
    }
}

// Function to print the linked list
void printList() {
    printf("\nLinked list: "); // Print heading for the linked list
    temp = head; // Start traversal from the head

    if (temp == NULL) { // Check if the list is empty
        printf("Empty\n"); // Print "Empty" if the list has no nodes
        return; // Exit the function
    }

    while (temp != NULL) { // Traverse the list until the end
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    printf("\n"); // Print a newline after the list
}

// Main function
int main() {
    createList();         // Step 1: Create the linked list
    printList();          // Step 2: Print the initial linked list

    insertAtPosition();   // Step 3: Insert a new node at a given position
    printList();          // Step 4: Print the updated linked list

    return 0;             // Return 0 to indicate successful execution
}