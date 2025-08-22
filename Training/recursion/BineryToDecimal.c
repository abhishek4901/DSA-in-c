#include <stdio.h>

// Function to convert binary to decimal
int changedecimal(int n) {
    int power = 1, d = 0;

    while (n > 0) {
        int rem = n % 10;       // Get last digit
        d = d + power * rem;    // Add corresponding power of 2
        power = power * 2;      // Next power of 2
        n = n / 10;             // Remove last digit
    }

    return d; // return the decimal value
}

int main() {
    int n;
    printf("Enter the binary number: ");
    scanf("%d", &n);

    int result = changedecimal(n);
    printf("Decimal number is %d\n", result);

    return 0;
}
