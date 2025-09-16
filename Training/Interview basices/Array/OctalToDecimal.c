#include <stdio.h>

int main() {
    int b, d = 0, p = 1;
    printf("Enter the octal number: ");
    scanf("%d", &b);

    while (b > 0) {
    int last_digit = b % 10;
    d = d + last_digit * p;
    p = p * 8;
    b = b / 10;
}
    printf("Decimal : %d\n", d);
    return 0;
}