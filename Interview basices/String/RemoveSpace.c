#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i]; // copy non-space char
        }
        i++;
    }
    str[j] = '\0'; // terminate string

    printf("String without spaces: %s\n", str);
    return 0;
}
