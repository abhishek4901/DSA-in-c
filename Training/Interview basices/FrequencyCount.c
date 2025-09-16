

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        count = 1;
        if (str[i] == '0')  // already counted
            continue;

        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0'; // mark as counted
            }
        }
        if (str[i] != '0')
            printf("%c : %d\n", str[i], count);
    }

    return 0;
}
