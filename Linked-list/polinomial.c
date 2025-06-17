#include <stdio.h>
#include <stdlib.h>

// Node structure for a polynomial term
struct Poly1 {
    int coeff;
    int power;
    struct Poly1* next;
};
 Poly1 *head=NULL, *end=NULL;
 
void createTerm(struct Poly1 **end, int coeff, int power) {
    struct Poly1* newTerm = (struct Poly1*)malloc(sizeof(struct Poly1));
    if (!newTerm) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newTerm->coeff = coeff;
    newTerm->power = power;
    newTerm->next = NULL;

    if (*head == NULL) {
        *head = newTerm;
        *end = newTerm;
    } else {
        (*end)->next = newTerm;
        *end = newTerm;
    }
}

// Example usage
int main() {
    struct Poly1 *head = NULL, *end = NULL;

    createTerm(&head, &end, 3, 4);
    createTerm(&head, &end, 2, 3);
    createTerm(&head, &end, -5, 2);

    // Print the polynomial
    struct Poly1* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->power);
        if (temp->next != NULL && temp->next->coeff >= 0)
            printf(" + ");
        else if (temp->next != NULL)
            printf(" ");
        temp = temp->next;
    }
    printf("\n");

    // Free memory
    while (head != NULL) {
        struct Poly1* toFree = head;
        head = head->next;
        free(toFree);
    }
    return 0;
}