#include <stdio.h>

int main() {
    int b, d = 0, p = 1;
    printf("Enter the binary number: ");
    scanf("%d", &b);

    while (b > 0) {
        d = d + p * (b % 10);
        p = p * 2;
        b = b / 10;
    }

    printf("Decimal : %d\n", d); 
    return 0;
}