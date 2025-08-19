#include <stdio.h>

int main() {
    char str[100];   // string storage
    int i;           // counter

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read input with spaces

    for (i = 0; str[i] != '\0'; i++); // count until '\0'

    // ignore newline character if present
    if (str[i-1] == '\n') {
        i--;
    }

    printf("Length of the string = %d\n", i);

    return 0;
}
