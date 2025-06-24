#include <stdio.h>
#include <string.h>

#define MAX 100

// Stack implementation
char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

int isBalanced(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            if (top == -1) {
                return 0; // No matching opening bracket
            }
            pop();
        }
    }
    return top == -1; // If stack is empty, parentheses are balanced
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Note: gets is unsafe, use fgets in real programs

    if (isBalanced(str)) {
        printf("Parentheses are balanced.\n");
    } else {
        printf("Parentheses are NOT balanced.\n");
    }

    return 0;
}
