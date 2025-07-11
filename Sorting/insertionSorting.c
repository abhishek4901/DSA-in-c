#include <stdio.h>
#define Max 100

// Insertion Sort Function
void InsertionSorting(int arr[Max], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];      // element to be inserted
        j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[Max];
    int n, i;

    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);

    printf("Enter the values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    InsertionSorting(arr, n);

    return 0;
}
