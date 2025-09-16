#include <stdio.h>

int main() {
    int arr[] = {5, 1, 3, 2};   // unsorted, missing = 4
    int n = 5;                  // numbers should be 1 to 5

    int xorAll = 0;

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xorAll ^= i;
    }

    // XOR all elements of the array
    for (int i = 0; i < n - 1; i++) {
        xorAll ^= arr[i];
    }

    // result left is the missing number
    printf("Missing number is: %d\n", xorAll);

    return 0;
}
