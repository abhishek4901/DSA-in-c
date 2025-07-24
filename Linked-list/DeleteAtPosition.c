#include <stdio.h>   // Include standard input-output header
#include <stdlib.h>  // Include standard library header for malloc and free

// Node structure definition
typedef struct linkedlist 
{  
    int data;                // Data part of the node
    struct linkedlist *next;  // Pointer to next node   
} list;

// Declare global pointers for linked list
list *newnode = NULL, *head = NULL, *temp = NULL, *tail = NULL;

// Declare variables for number of nodes and value to insert
int n, value;

// Function to insert nodes into linked list
void insertlinkedlist()
{
    printf("Enter the number of nodes: ");
    scanf("%d", &n);  // Input number of nodes

    for (int i = 1; i <= n; i++)  // Loop for each node
    {
        printf("\nEnter the value of node %d: ", i);
        scanf("%d", &value);  // Input node value

        newnode = (list *)malloc(sizeof(list));  // Allocate memory for new node
        if (newnode == NULL)  // Check if memory allocation failed
        {
            printf("Memory allocation failed");
  
        }

        newnode->data = value;   // Assign value to new node
        newnode->next = NULL;    // New node will point to NULL initially

        if (head == NULL)  // If list is empty (first node)
        {
            head = newnode;   // Head and tail both will be the new node
            tail = newnode;
        }
        else  // If list is not empty
        {
            tail->next = newnode;  // Link new node at the end of list
            tail = newnode;        // Update tail to point to new last node
        }
    }
}

// Function to display the linked list
void display()
{
    printf("\nLinked list: ");
    temp = head;  // Start from the head

    if (temp == NULL)  // If list is empty
    {
        printf("Empty\n");
    }

    while (temp != NULL)  // Traverse until end of list
    {
        printf("%d ", temp->data);  // Print current node data
        temp = temp->next;          // Move to next node
    }
    printf("\n");  // Print new line after list
}

// Function to delete a node at a given position
void positionatdelete()
{
    int position, i = 1;  // i to track current node number
    printf("\nEnter the position to delete: ");
    scanf("%d", &position);  // Input the position to delete

    // If list is empty
    if (head == NULL)
    {
        printf("List is already empty.\n");
    }

    // If deleting the first node (position 1)
    if (position == 1)
    {
        temp = head;          // Store current head node
        head = head->next;     // Move head to next node
        free(temp);            // Free the old head node
        printf("Node at position %d deleted.\n", position);
    }

    // Traverse to (position - 1)th node
    temp = head;
    list *prev = NULL;  // Previous node pointer

    while (temp != NULL && i < position)
    {
        prev = temp;         // Store previous node
        temp = temp->next;   // Move to next node
        i++;                 // Increment position counter
    }

    // If position is greater than number of nodes
    if (temp == NULL)
    {
        printf("Invalid position.\n");

    }

    // Adjust the links to delete the node
    prev->next = temp->next;  // Previous node now points to next of current node
    free(temp);               // Free the node at the given position
    printf("Node at position %d deleted.\n", position);
}

// Main function
int main()
{
    insertlinkedlist();  // Create the linked list
    display();           // Display the linked list
    positionatdelete();  // Delete node at a given position
    display();           // Display updated linked list

    return 0;  // Successful execution
}
