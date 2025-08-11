#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256

int areAnagramStrings(char str1[], char str2[]) {
    int count[CHAR_RANGE] = {0};
    int i;
    // If lengths are not equal, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    for (i = 0; str1[i] && str2[i]; i++) {
        count[(char)tolower(str1[i])]++;
        count[(char)tolower(str2[i])]--;
    }

    for (i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    if (areAnagramStrings(str1, str2))
        printf("\"%s\" and \"%s\" are anagram strings.\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not anagram strings.\n", str1, str2);

    return 0;
}