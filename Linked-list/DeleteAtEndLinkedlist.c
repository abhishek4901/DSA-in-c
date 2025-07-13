#include <stdio.h>  // Include standard input-output library
#include <stdlib.h> // Include standard library for memory allocation functions

// Define the structure of a linked list node
typedef struct LinkedList
{
    int data;                // Data field to store the value of the node
    struct LinkedList *next; // Pointer to the next node in the list
} list;

// Declare global pointers for managing the linked list
list  *newnode = NULL, *head = NULL, *temp = NULL, *tail = NULL;
int n, value; // Declare variables for the number of nodes and node values

void insertatbegain()
{
    printf("Enter the number of nodes: "); // Prompt the user to enter the number of nodes
    scanf("%d", &n); // Read the number of nodes from the user

    for (int i = 1; i <= n; i++) // Loop to create and insert nodes
    {
        printf("\n Enter the value of node no %d: ", i); // Prompt for the value of the current node
        scanf("%d", &value); // Read the value of the node

        newnode = (list *)malloc(sizeof(list)); // Allocate memory for a new node
        if (newnode == NULL) // Check if memory allocation failed
        {
            printf("Memory allocation failed\n"); // Print error message if allocation fails
          
        }
        newnode->data = value; // Assign the value to the new node
        newnode->next = NULL;  // Set the next pointer of the new node to NULL

        if (head == NULL) // Check if the list is empty
        {
            head = newnode; // Set the new node as the head of the list
            tail = newnode; // Set the new node as the tail of the list
        }
        else
        {
            tail->next = newnode; // Link the new node to the end of the list
            tail = newnode;       // Update the tail pointer to the new node
        }
    }
   
}
void printList()
{
    printf("\nLinked list: "); // Print a heading for the linked list
    temp = head; // Start traversal from the head of the list
    while (temp != NULL) // Loop until the end of the list
    {
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
}
void deleteLastNode()
{
    if (head == NULL) // Check if the list is empty
    {
        printf("\nList is already empty.\n"); // Print a message if the list is empty
        
    }
    if (head->next == NULL) // Check if there is only one node in the list
    {
        free(head); // Free the memory of the single node
        head = NULL; // Set the head pointer to NULL
        tail = NULL; // Set the tail pointer to NULL
        printf("\nAfter deleting last node, list is now empty.\n"); // Print a message
      
    }

    temp = head; // Start traversal from the head of the list
    while (temp->next != tail) // Loop until the second-last node is reached
    {
        temp = temp->next; // Move to the next node
    }
    // At this point, temp is the second-last node
    free(tail); // Free the memory of the last node
    tail = temp; // Update the tail pointer to the second-last node
    tail->next = NULL; // Set the next pointer of the new tail to NULL
    printf("\nLast node deleted successfully.\n"); // Print a success message
}
int main()
{
    insertatbegain(); // Call the function to create the linked list
    printList();      // Call the function to display the linked list
    deleteLastNode(); // Call the function to delete the last node
    printList();      // Call the function to display the linked list after deletion
    return 0;         // Return 0 to indicate successful execution
}
