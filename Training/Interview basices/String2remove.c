#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "surbhi rajesh";   // input string

    // split string into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        int len = strlen(token);

        // remove last 2 letters
        if (len > 2) {
            token[len - 2] = '\0';
        } else {
            token[0] = '\0';  // if word has <= 2 letters
        }

        printf("%s ", token);

        token = strtok(NULL, " ");
    }

    return 0;
}
