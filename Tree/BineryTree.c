#include <stdio.h>
#include <stdlib.h>

typedef struct Binerysearcchtree
{
    int data;
    struct Binerysearcchtree *left; 
    struct Binerysearcchtree *right; 
} BST;
 
BST *root = NULL; 

// Function prototypes 
int insert(int no);
int deleteNode(int no);
void preorder(BST *node);
void inorder(BST *node);
void postorder(BST *node);
int height(BST *node);
int search(BST *node, int no);
int countNodes(BST *node);

int main()
{
    int choice, no, result;

    while (1)
    {
        printf("\n--- BST MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Preorder Traverse\n");
        printf("4. Postorder Traverse\n");
        printf("5. Inorder Traverse\n");
        printf("6. Height of the Tree\n");
        printf("7. Search Element\n");
        printf("8. Count Total Nodes\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &no);
                result = insert(no);
                if (result)
                    printf("Inserted.\n");
                else
                    printf("Duplicate value, not inserted.\n");
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &no);
                result = deleteNode(no);
                if (result)
                    printf("Deleted.\n");
                else
                    printf("Value not found.\n");
                break;
            case 3:
                printf("Preorder: ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;
            case 6:
                printf("Height: %d\n", height(root));
                break;
            case 7:
                printf("Enter value to search: ");
                scanf("%d", &no);
                result = search(root, no);
                if (result)
                    printf("Element %d found.\n", no);
                else
                    printf("Element %d not found.\n", no);
                break;
            case 8:
                printf("Total nodes: %d\n", countNodes(root));
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

// Insert using global root
int insert(int no)
{
    BST *newnode = (BST*) malloc(sizeof(BST));
    if (!newnode) return 0;
    newnode->data = no;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL)
    {
        root = newnode;
        return 1;
    }
    BST *temp = root, *pre = NULL;
    while (temp != NULL)
    {
        pre = temp;
        if (no < temp->data)
            temp = temp->left;
        else if (no > temp->data)
            temp = temp->right;
        else
        {
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

// Helper to find minimum node
BST* findMin(BST* node)
{
    while (node && node->left)
        node = node->left;
    return node;
}

// Delete using global root
int deleteNode(int no)
{
    BST *parent = NULL, *curr = root, *succ, *succParent;
    while (curr && curr->data != no)
    {
        parent = curr;
        if (no < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if (!curr) return 0; // Not found

    // Node with only one child or no child
    if (curr->left == NULL || curr->right == NULL)
    {
        BST *child = (curr->left) ? curr->left : curr->right;
        if (parent == NULL)
            root = child;
        else if (parent->left == curr)
            parent->left = child;
        else
            parent->right = child;
        free(curr);
        return 1;
    }
    // Node with two children
    succParent = curr;
    succ = curr->right;
    while (succ->left)
    {
        succParent = succ;
        succ = succ->left;
    }
    curr->data = succ->data;
    if (succParent->left == succ)
        succParent->left = succ->right;
    else
        succParent->right = succ->right;
    free(succ);
    return 1;
}

void preorder(BST *node)
{
    if (node)
    {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void inorder(BST *node)
{
    if (node)
    {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

void postorder(BST *node)
{
    if (node)
    {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->data);
    }
}

int height(BST *node)
{
    if (node == NULL)
        return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    return (lh > rh ? lh : rh) + 1;
}

int search(BST *node, int no)
{
    while (node)
    {
        if (no == node->data)
            return 1;
        else if (no < node->data)
            node = node->left;
        else
            node = node->right;
    }
    return 0;
}

int countNodes(BST *node)
{
    if (node == NULL)
        return 0;
    return 1 + countNodes(node->left) + countNodes(node->right);
}
