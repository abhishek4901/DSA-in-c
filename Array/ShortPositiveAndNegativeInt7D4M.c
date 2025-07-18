#include <stdio.h>

// void sortArray(int arr[], int size) {
//     // Bubble Sort logic
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

int main() {
    int arr[100] = {2, 1, 5, -4, -10, -3, 1, 6};
    int n = 8;  // size of array

    int pos[100], neg[100]; // to store positives and negatives
    int p = 0, q = 0; // p: pos size, q: neg size

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[p++] = arr[i];
        } else if (arr[i] < 0) {
            neg[q++] = arr[i];
        }
    }

    // Sort both arrays
    // sortArray(pos, p);// for positive value sort
    // sortArray(neg, q);// for neg value sort

    // Print results
    printf("Sorted Positive numbers are: ");
    for (int i = 0; i < p; i++) {
        printf("%d ", pos[i]);
    }

    printf("\nSorted Negative numbers are: ");
    for (int i = 0; i < q; i++) {
        printf("%d ", neg[i]);
    }

    printf("\n");
    return 0;
}
