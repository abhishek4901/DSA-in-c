#include<stdio.h> // Include standard input-output header
#include<stdlib.h> // Include standard library header for malloc function

// Define the structure of a linked list node
typedef struct LinkedList {
    int data; // Store the data in the node
    struct LinkedList* next; // Pointer to the next node
} list;

// Declare global pointers for linked list management
list *newnode = NULL, *head = NULL, *temp = NULL, *tail = NULL;

// Declare variables for number of nodes and node values
int n, value;

// Function to insert nodes at the beginning
void insertatbegain() {

    // Input the number of nodes from the user
    printf("Enter the number of nodes: ");
    scanf("%d", &n); // Read the number of nodes

    // Loop to input values and create nodes
    for (int i = 1; i <= n; i++) {
        printf("Enter the values of the node no %d :\n", i); // Prompt for each node value

        newnode = (list*)malloc(sizeof(list)); // Allocate memory for a new node

        if (newnode == NULL) { // Check if memory allocation failed
            printf("Memory allocation failed\n");
            return; // Exit the function if memory could not be allocated
        }

        scanf("%d", &value); // Read the value for the node
        newnode->data = value; // Assign value to the node's data
        newnode->next = NULL; // Set the new node's next pointer to NULL

        if (head == NULL) { // Check if the list is empty
            head = newnode; // Make new node the head if list is empty
        } else {
            tail->next = newnode; // Link the previous node to the new node
        }

        tail = newnode; // Update tail to point to the new node
    }
}

// Function to print the linked list
void printList() {
    printf("Linked list: "); // Display heading

    temp = head; // Start traversal from head

    while (temp != NULL) { // Loop till the end of the list
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
}

// Main function
int main() {
    insertatbegain(); // Create the linked list by inserting nodes
    printList(); // Display the linked list
    return 0; // Return success
}
