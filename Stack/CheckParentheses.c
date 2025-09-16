// #include <stdio.h>
// #include <string.h>

// #define MAX 100

// // Stack implementation
// char stack[MAX];
// int top = -1;

// // Push a character onto the stack
// void push(char c) {
//     if (top < MAX - 1) {
//         stack[++top] = c;
//     }
// }

// // Pop the top character from the stack
// char pop() {
//     if (top >= 0) {
//         return stack[top--];
//     }
//     return '\0'; // Stack is empty
// }

// // Function to check matching pairs
// int isMatchingPair(char opening, char closing) {
//     return (opening == '(' && closing == ')') ||
//            (opening == '{' && closing == '}') ||
//            (opening == '[' && closing == ']');
// }

// // Function to check if brackets are balanced
// int checkBalanced(char *str) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];

//         // If it's an opening bracket, push to stack
//         if (ch == '(' || ch == '{' || ch == '[') {
//             push(ch);
//         }
//         // If it's a closing bracket
//         else if (ch == ')' || ch == '}' || ch == ']') {
//             if (top == -1) return 0; // No opening bracket

//             char topChar = pop();
//             if (!isMatchingPair(topChar, ch)) {
//                 return 0; // Not a matching pair
//             }
//         }
//     }

//     return (top == -1); // Stack should be empty at the end
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; // Remove newline

//     if (checkBalanced(str)) {
//         printf("Brackets are balanced.\n");
//     } else {
//         printf("Brackets are NOT balanced.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string with parentheses: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(')
            count++;      // increment for '('
        else if (str[i] == ')')
            count--;      // decrement for ')'

        if (count < 0) {  // more ')' than '('
            printf("Parentheses are NOT balanced\n");
            return 0;
        }
    }

    if (count == 0)
        printf("Parentheses are balanced\n");
    else
        printf("Parentheses are NOT balanced\n");

    return 0;
}
