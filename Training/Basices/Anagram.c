//  //that code run correctly on online complier but not in vs code

// import java.util.Arrays;
// public class Anagram {
//     public static void main(String[] args) {
//         String stra = "abhi";
//         String strb = "abhi";

//         char[] str1 = stra.toLowerCase().toCharArray();
//         char[] str2 = strb.toLowerCase().toCharArray();

//         // Sort both arrays
//         Arrays.sort(str1);
//         Arrays.sort(str2);

//         // Compare sorted arrays
//         if (Arrays.equals(str1, str2)) {
//             System.out.println("They are anagram strings.");
//         } else {
//             System.out.println("They are not anagram strings.");
//         }
//     }
// }

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function to convert string to lowercase
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to sort characters in a string (simple bubble sort)
void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    // Convert to lowercase
    toLowerCase(str1);
    toLowerCase(str2);

    // If lengths are not equal, not anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Compare sorted strings
    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[100] = "abhi";
    char str2[100] = "Ibha";

    if (areAnagrams(str1, str2)) {
        printf("They are anagram strings.\n");
    } else {
        printf("They are not anagram strings.\n");
    }

    return 0;
}
