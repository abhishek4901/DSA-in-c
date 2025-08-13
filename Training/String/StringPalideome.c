#include <stdio.h>
#include <string.h>

int ispalindrome(char *s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    int i, j, l, count = 0;

    printf("Enter a string: ");
    scanf("%s", str); // Reads string without spaces
    l = strlen(str);
    for (i = 0; i < l; i++) {
        for (j = i; j < l; j++) {
            if (ispalindrome(str, i, j)) {
                count++;
            }
        }
    }
    printf("The number of palindromic substrings in the string is: %d\n", count);
    return 0;
}
