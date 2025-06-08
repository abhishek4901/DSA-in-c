#include<stdio.h>
#include<stdlib.h>

 int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* prev = NULL;
    int n, value;

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input the values of the nodes
    printf("Enter the values of the nodes:\n");
    for (int i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        temp->data = value;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;  // First node becomes the head
        } else {
            prev->next = temp;  // Link the previous node to the current node
        }
        prev = temp;  // Update the previous node
    }

    // Print the linked list
    printf("Linked list: ");
    temp = head;  // Reset temp to head for traversal
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}