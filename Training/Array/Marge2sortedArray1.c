#include <stdio.h>
int main() {
    int i, j, k = 0, m, n;

    // Input size of Array1
    printf("Enter the size of Array1: ");
    scanf("%d", &m);
    int arr1[m];

    // Input elements of Array1
    printf("Enter the elements of first array (sorted): ");
    for(i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of Array2
    printf("Enter the size of Array2: ");
    scanf("%d", &n);
    int arr2[n];

    // Input elements of Array2
    printf("Enter the elements of second array (sorted): ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int Arr3[m + n];

    // Merge arrays
    i = 0;
    j = 0;
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            Arr3[k++] = arr1[i++];
        } else {
            Arr3[k++] = arr2[j++];
        }
    }

    // Add remaining elements
    while(i < m) {
        Arr3[k++] = arr1[i++];
    }

    while(j < n) {
        Arr3[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array: ");
    for(i = 0; i < m + n; i++) {
        printf("%d ", Arr3[i]);
    }

    return 0;
}
