#include <stdio.h>

int main() {
    int i, j, k = 0, m, n;

    // Input size of Array1
    printf("Enter the size of Array1: ");
    scanf("%d", &n);
    int arr1[n];

    // Input elements of Array1
    printf("Enter the elements of first array (sorted): ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of Array2
    printf("Enter the size of Array2: ");
    scanf("%d", &m);
    int arr2[m];

    // Input elements of Array2
    printf("Enter the elements of second array (sorted): ");
    for(i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int Arr3[m + n];

    // ✅ Using for loop for merging
    for(i = 0, j = 0; i < n && j < m;) {
        if(arr1[i] < arr2[j]) {
            Arr3[k++] = arr1[i++];
        } else {
            Arr3[k++] = arr2[j++];
        }
    }

    // Remaining elements from arr1
    for(; i < n; i++) {
        Arr3[k++] = arr1[i];
    }

    // Remaining elements from arr2
    for(; j < m; j++) {
        Arr3[k++] = arr2[j];
    }

    // Print merged array
    printf("Merged sorted array (with duplicates): ");
    for(i = 0; i < k; i++) {
        printf("%d ", Arr3[i]);
    }
    printf("\n");

    return 0;
}
