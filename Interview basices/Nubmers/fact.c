#include <stdio.h>

// Function to calculate factorial using recursion
long long factorial(int n) {
    if (n == 0||n==1)  // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


        printf("Factorial = %d \n", factorial(num));

    return 0;
}
