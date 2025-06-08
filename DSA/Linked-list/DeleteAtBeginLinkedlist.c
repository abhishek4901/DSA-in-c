#include <stdio.h>  // Include standard input-output header
#include <stdlib.h> // Include standard library header for malloc function

// Define the structure of a linked list node
typedef struct LinkedList
{
    int data;                // Store the data in the node
    struct LinkedList *next; // Pointer to the next node
} list;

// Declare global pointers for linked list management
list *newnode = NULL, *head = NULL, *temp = NULL, *tail = NULL;

// Declare variables for number of nodes and node values
int n, value;

// Function to insert nodes at the beginning
void insertatbegain()
{
    // Input the number of nodes from the user
    printf("Enter the number of nodes: ");
    scanf("%d", &n); // Read the number of nodes

    for (int i = 1; i <= n; i++) // Loop to input values and create nodes
    {
        printf("\n Enter the values of the node no %d : ", i); // Prompt for each node value
        scanf("%d", &value);   // Read the value for the node

        newnode = (list *)malloc(sizeof(list)); // Allocate memory for a new node

        if (newnode == NULL)// newnode have some garbage value if malloc created  block memory 
        { 
            printf("Memory allocation failed\n");// Check if memory allocation failed 
            return; // Exit the function if memory could not be allocated
        }
        newnode->data = value; // Assign value to the node's data
        newnode->next = NULL;  // Set the new node's next pointer to NULL
        if (head == NULL)
        {                   // Check if the list is empty
            head = newnode; // Make new node the head if list is empty
            tail = newnode;
        }
        else
        {
            tail->next = newnode; // Link the previous node to the new node
        }

        tail = newnode; // Update tail to point to the new node
    }
}
// Function to print the linked list
void printList()
{
    printf("\n Linked list: "); // Display heading
    temp = head; // Start traversal from head
    while (temp != NULL)
    {                              // Loop till the end of the list
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
}
void deleteList()
{
    temp = head; // Start from the head of the list
    // while (temp != NULL)                          
        list *nextNode = temp->next; // Store the next node(temp ka next=next node address )
        free(temp);                  // Free the current node(free temp(head))
        temp = nextNode;             // Move to the next node(nextnode ki temp(head))
    
    printf("\n After deletion Linked list: "); // Display heading
    // temp = head; // Start traversal from head
    while (temp != NULL)
    {                              // Loop till the end of the list
        printf("  %d  ", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    // head = NULL; // Set head to NULL after deletion
}
// Main function
int main()
{
    insertatbegain(); // Create the linked list by inserting nodes
    printList();      // Display the linked list
    deleteList();     // Delete the linked list
    return 0;         // Return success
}
