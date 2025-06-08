#include<stdio.h>

int main() {
    int arr[4][4] = {{5, 7, -2, 1}, {3, 14, -8, 5}, {6, 17, 10, 12}, {9, 12, 15, -6}}; // 2D array with 4 rows and 4 columns
    int i = 0, j = 0, rsum = 0, csum = 0; // Loop variables and row/column sums
    int sum = 0; // Variable to store the sum of positive integers
    int neg= 0; // Variable to store the sum of positive integers

    // Calculate the sum of positive numbers
    for (i = 0; i < 4; i++) {
        rsum=0;
        csum=0;
        for (j = 0; j < 4; j++) {
            if (arr[i][j] > 0) {
                sum += arr[i][j];
                rsum += arr[i][j]; // Add positive numbers to the sum
                csum += arr[i][j]; // Add positive numbers to the sum
            }
        }
        printf("The sum of positive numbers in row %d is: %d\n", i, rsum); // Print the sum of positive numbers in each row
        printf("The sum of positive numbers in column %d is: %d\n", i, csum); // Print the sum of positive numbers in each column
    }

    // // Print the sum of positive numbers
    printf("The sum of  Totl positive numbers is: %d\n", sum);
    // for (i = 0; i < 4; i++) {
    //     for (j = 0; j < 4; j++) {
    //         if (arr[i][j] < 0) {
    //             neg += arr[i][j]; // Add positive numbers to the sum
    //         }
    //     }
    // }

    // // Print the sum of positive numbers
    // printf("The sum of Negative numbers is: %d\n", neg);

    return 0;
}