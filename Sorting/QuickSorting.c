#include <stdio.h>

// Partition with pivot as first element
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Use first element as pivot
    int i = low + 1;
    int j = high;

    while (i <= j) {
        // Find element > pivot from left
        while (i <= high && arr[i] <= pivot)
            i++;

        // Find element < pivot from right
        while (j >= low && arr[j] > pivot)
            j--;

        // Swap without pointer if i < j
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place pivot in correct position (again, swap without pointer)
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // Return pivot index
}

// Quick Sort using first element as pivot
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1);  // sort left sub-array
        quickSort(arr, pi + 1, high); // sort right sub-array
    }
}

// Main function
int main() {
    int arr[] = {6, 9, 5, 8, 7, 4, 3, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\nSorted array using Quick Sort (Pivot = First Element):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
