#include <stdio.h>
#include <ctype.h>  // For the tolower() function
void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert character to lowercase for easy comparison
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check if the character is a consonant
        else if ((ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Read input string from user
    countVowelsConsonants(str);// Function to count vowels and consonants
    return 0;
}
