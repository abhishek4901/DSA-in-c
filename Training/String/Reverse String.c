#include <stdio.h>

// Function to reverse characters in the array from index start to end
void reverse(char *arr, int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char s[100];
    int i, length = 0, start = 0, end;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    // Remove trailing newline character from fgets if present
    while (s[length] != '\0') {
        length++;
    }
    if (length > 0 && s[length - 1] == '\n') {
        s[length - 1] = '\0';
        length--;
    }

    // Step 2: Reverse whole string
    end = length - 1;
    reverse(s, start, end);

    // Step 3: Reverse each word to fix the letters
    start = 0;
    for (i = 0; i <= length; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed sentence by words: %s\n", s);

    return 0;
}
