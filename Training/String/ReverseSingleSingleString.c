#include <stdio.h>

int main() {
    char s[50];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); // Read string input with spaces

    int i, pre = 0, start, end;
    char temp;

    // Step 1: Remove newline if present
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    // Step 2: Reverse each word
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            start = pre;
            end = i - 1;

            // Reverse current word
            while (start < end)
            {
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
                

            if (s[i] == '\0') // End of string
                break;

            pre = i + 1;  // Update start of next word
        }
    }

    printf("Reversed words string: %s\n", s);
    return 0;
}
