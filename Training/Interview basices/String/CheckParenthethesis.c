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
