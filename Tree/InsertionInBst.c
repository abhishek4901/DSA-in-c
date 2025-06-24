#include <stdio.h>
#include <stdlib.h>

typedef struct Binerysearcchtree {
    int data;
    struct Binerysearcchtree *left;
    struct Binerysearcchtree *right;
} BST;

BST *root = NULL;

int insert(int no);
void inorder(BST *node);

int main() {
    int choice, no;
    while (1) {
        printf("\n1. Insert\n2. Inorder Traverse\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &no);
                if (insert(no))
                    printf("Inserted.\n");
                else
                    printf("Duplicate value, not inserted.\n");
                break;
            case 2:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

int insert(int no) {
    BST *newnode = (BST*) malloc(sizeof(BST));
    if (!newnode) return 0;
    newnode->data = no;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL) {
        root = newnode;
        return 1;
    }
    BST *temp = root, *pre = NULL;
    while (temp != NULL) {
        pre = temp;
        if (no < temp->data)
            temp = temp->left;
        else if (no > temp->data)
            temp = temp->right;
        else {
            free(newnode);
            return 0; // Duplicate
        }
    }
    if (no < pre->data)
        pre->left = newnode;
    else
        pre->right = newnode;
    return 1;
}

void inorder(BST *node) {
    if (node) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}