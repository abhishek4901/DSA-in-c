#include <stdio.h>
#include <stdlib.h>

// Define the structure of a singly linked list node
typedef struct SinglyLinkedList {
    int data;
    struct SinglyLinkedList* next;
} slist;

// Global pointer to manage the list
slist* head = NULL;

// Function to create a linked list
void createList() {
    int n, value;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value of node no %d: ", i);
        slist* newnode = (slist*)malloc(sizeof(slist));
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
            slist* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

// Function to print the list
void printList() {
    slist* temp = head;
    printf("\nSingly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to insert at the beginning
void insertAtBeginning() {
    int value;
    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);

    slist* newnode = (slist*)malloc(sizeof(slist));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

// Function to insert at the end
void insertAtEnd() {
    int value;
    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    slist* newnode = (slist*)malloc(sizeof(slist));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        slist* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// Function to insert at a given position
void insertAtPosition() {
    int value, pos;
    printf("Enter the position to insert the new node: ");
    scanf("%d", &pos);
    printf("Enter the value to insert at position: ");
    scanf("%d", &value);

    slist* newnode = (slist*)malloc(sizeof(slist));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = value;

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    } else {
        slist* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position out of range!\n");
            free(newnode);
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

// Function to delete from the beginning
void deleteAtBeginning() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    slist* temp = head;
    head = head->next;
    free(temp);
}

// Function to delete from the end
void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    slist* temp = head;
    slist* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) {
        head = NULL;
    } else {
        prev->next = NULL;
    }
    free(temp);
}

// Function to delete a node at a given position
void deleteAtPosition() {
    int pos;
    printf("Enter the position to delete the node: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    slist* temp = head;
    if (pos == 1) {
        head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    slist* prev = head;
    while (prev->next != temp) {
        prev = prev->next;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to search for an element in the list
void search() {
    int value;
    printf("Enter value to search: ");
    scanf("%d", &value);

    slist* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Value %d found in the list.\n", value);
            return;
        }
        temp = temp->next;
    }

    printf("Value %d not found in the list.\n", value);
}

// Menu function
void menu() {
    int choice;
    while (1) {
        printf("\nSingly Linked List Menu:\n");
        printf("1. Create List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Given Position\n");
        printf("5. Delete at Beginning\n");
        printf("6. Delete at End\n");
        printf("7. Delete at Given Position\n");
        printf("8. Search\n");
        printf("9. Display List\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createList();
                break;
            case 2:
                insertAtBeginning();
                break;
            case 3:
                insertAtEnd();
                break;
            case 4:
                insertAtPosition();
                break;
            case 5:
                deleteAtBeginning();
                break;
            case 6:
                deleteAtEnd();
                break;
            case 7:
                deleteAtPosition();
                break;
            case 8:
                search();
                break;
            case 9:
                printList();
                break;
            case 10:
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
