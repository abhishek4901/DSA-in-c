#include <stdio.h>

int main() {
    // char s[50] = "i love my india";
    char s[50];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); // Read string input
    int i, pre = 0, start, end, temp;

    for (i = 0;; i++) {
        // Check for space or null terminator to mark word boundary
        if (s[i] == ' ' || s[i] == '\0') {
            // The word is from pre to i-1
            start = pre;
            end = i - 1;

            // Reverse characters in this word
            while (start < end) {
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
