#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[20], s2[20]; 
    int z[26] = {0};  
 
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: "); 
    scanf("%s", s2);

    // Check length first
    int l1 = strlen(s1);
    int l2 = strlen(s2);  

    if (l1 != l2) {
        printf("Not Anagram");
        return 0;
    }

    // Count frequency of each character (case-insensitive)
    for (int i = 0; s1[i] != '\0'; i++) {// store vlaue 
        char ch = toupper(s1[i]);
        z[ch - 65]++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {// stored value is same or match then release space and array ki zero
         char ch = toupper(s2[i]);
        z[ch - 65]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (z[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
