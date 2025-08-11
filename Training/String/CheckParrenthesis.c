#include <stdio.h>

int isValid(char *str) {
    char stack[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        // Check and pop closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) return 0; // No matching opening
            char last = stack[top--];
            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                return 0; // Mismatch
            }
        }
    }

    return (top == -1); // Valid if stack is empty
}

int main() {
    char expr[100];

    printf("Enter an expression: ");
    scanf("%s", expr);

    if (isValid(expr))
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}
