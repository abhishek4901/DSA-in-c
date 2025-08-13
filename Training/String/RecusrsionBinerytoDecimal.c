// #include <stdio.h>

// void decimalToBinary(int n) {
//     if (n > 0) {
//         decimalToBinary(n / 2);  // Recursive call
//         printf("%d", n % 2);     // Print remainder after returning
//     }
// }

// int main() {
//     int d;
//     printf("Enter the decimal number: ");
//     scanf("%d", &d);

//     if (d == 0)
//         printf("0");
//     else
//         decimalToBinary(d);

//     printf("\n");
//     return 0;
// } or


#include <stdio.h>

int k = -1;
char str[20];

void Binary(int n) {
    if (n > 0) {
        Binary(n / 2);                  // Recursive call
        str[++k] = (n % 2) + '0';        
    }
}

int main() {
    Binary(5);           // Convert 25 to binary
    str[++k] = '\0';      // Null-terminate the string
    
    printf("%s\n", str);  // Print the binary string
    return 0;
}
