#include <stdio.h>

int main() {
    char s[100];
    int i, length = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    // Step 1: Remove newline if present
     for ( int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        length++;
    }
    // Step 2: Reverse the whole string
   int start = 0, end = length - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }  


    // Step 3: Reverse each word in the reversed string
    start = 0;
    for (i = 0; i <= length; i++) {
        // On space or end of string, reverse current word
        if (s[i] == ' ' || s[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
            start = i + 1; // move to next word
        }
    }

    printf("Reversed sentence by words: %s\n", s);

    return 0;
}
