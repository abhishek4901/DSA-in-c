// #include <stdio.h>

// int main() {
//     char str[100];   // string storage
   

//     printf("Enter a string: ");
//      fgets(str, sizeof(str), stdin);   // read input with spaces

//  for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//     }

//     printf("Length of the string = %d\n", i); // print length

//     return 0;
// }

#include <stdio.h>

int main() {
    char str[100];   // string storage

    int length = -1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read input with spaces

    // remove newline if present
    for ( int i = 0; str[i] != '\0'; i++) {
        length++;
    }

  
    printf("Length of the string = %d\n", length);

    return 0;
}
