#include <stdio.h>

int main() {
    int d, b = 0, p = 1;
    printf("Enter the decimal number: ");
    scanf("%d", &d);

    while (d > 0) {
        b = b + (d % 2) * p;  // Take remainder (0 or 1) and place it in correct position
        p = p * 10;           // Move to next place value in binary
        d = d / 2;            // Divide decimal number by 2
    }

    printf("Binary : %d\n", b);
    return 0;
}
