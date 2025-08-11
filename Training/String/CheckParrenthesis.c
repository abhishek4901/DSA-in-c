#include <stdio.h>

// Function to check if the parentheses/brackets are valid
int isValid(char *str) {
    char stack[100];
    int top = -1; // top = -1 means stack is empty, zero nhi kr skte kyoki zero ek index their value can store


    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch; // pre-increment: becasue initial value is -1
        }
        // Check and pop closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) return 0; // No matching opening bracket in stack then no match no pop 

            char last = stack[top--]; // Pop last element

            // Check if the bracket types match
            if ((ch == ')' && last != '(') ||// two of brackets checking at one time
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                return 0; // Mismatch found
            }
        }
    }

    return (top == -1); // Valid only if stack is empty at the end
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
