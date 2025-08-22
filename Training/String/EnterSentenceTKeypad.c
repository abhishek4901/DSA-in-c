#include <stdio.h>
#include <string.h>

int main() {
    char *key[] = {"2", "22", "222", "3", "33", "333",
                   "4", "44", "444", "5", "55", "555",
                   "6", "66", "666", "7", "77", "777", "7777",
                   "8", "88", "888", "9", "99", "999", "9999"};

    char sentence[100];
    char output[1000]="" ;// string always write in double quotes;

    printf("Enter the string: ");
    fgets(sentence, sizeof(sentence), stdin); 

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            strcat(output, "0"); //space = 0
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            strcat(output, key[sentence[i] - 'A']);
        }
    }

    printf("The sentence in keypad form: %s\n", output);
    return 0;
}
