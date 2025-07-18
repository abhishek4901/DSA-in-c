#include <stdio.h>
#include <stdlib.h>

// Define structure for linked list
typedef struct LinkedList {
    int data;
    struct LinkedList* next;
} list;

// Global pointers
list *head = NULL, *newnode = NULL, *temp = NULL, *tail = NULL;
int n, value;

// Function to insert nodes into the linked list
void insertNodes() {
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        newnode = (list*)malloc(sizeof(list));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter value for node %d: ", i);
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            tail->next = newnode;
        }
        tail = newnode;
    }
}

// ✅ Function to find the middle node using slow and fast pointer
void findMiddle() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    list *slow = head;
    list *fast = head;

    // Move slow by 1 and fast by 2
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("Middle node value is: %d\n", slow->data);
}

// Function to print the list
void printList() {
    printf("Linked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    insertNodes();  // Create list
    printList();    // Print list
    findMiddle();   // Find and print middle node
    return 0;
}
