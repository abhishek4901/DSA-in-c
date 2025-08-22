#include <stdio.h>

void decimalToBinary(int n) {
   
    decimalToBinary(n / 2);
    printf(" binary number is %d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        decimalToBinary(num);
    }
    
    return 0;
}