#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name1[50], name2[50], flames[] = "FLAMES";
    int i, j, count = 0, len = 6, index = 0;

    printf("Enter first name: ");
    scanf("%s", name1);
    printf("Enter second name: ");
    scanf("%s", name2);

    // Remove matching letters
    for (i = 0; name1[i] != '\0'; i++) {
        for (j = 0; name2[j] != '\0'; j++) {
            if (tolower(name1[i]) == tolower(name2[j]) && name1[i] != '0') {
                name1[i] = name2[j] = '0';
                break;
            }
        }
    }

    // Count remaining letters
    for (i = 0; name1[i] != '\0'; i++) {
        if (name1[i] != '0') {
            count++;
        }
    }
    for (i = 0; name2[i] != '\0'; i++) {
        if (name2[i] != '0') {
            count++;
        }
    }

    // FLAMES elimination
    while (len > 1) {
        index = (index + count - 1) % len;
        for (i = index; i < len - 1; i++) flames[i] = flames[i + 1];
        len--;
    }

    // Result
    switch (flames[0]) {
        case 'F': printf("Friends\n"); break;
        case 'L': printf("Love\n"); break;
        case 'A': printf("Affection\n"); break;
        case 'M': printf("Marriage\n"); break;
        case 'E': printf("Enemies\n"); break;
        case 'S': printf("Siblings\n"); break;
    }

    return 0;
}
