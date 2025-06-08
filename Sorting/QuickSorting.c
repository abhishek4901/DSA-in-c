#include <stdio.h>
#define MAX 100

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int down, int up) {
    int pivot = arr[up]; // pivot
    int i = (down - 1);     // Index of smaller element

    for (int j = down; j <= up - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[up]);
    return (i + 1);
}

void quickSort(int arr[], int down, int up) {
    if (down < up) {
        int pi = partition(arr, down, up);

        quickSort(arr, down, pi - 1);
        quickSort(arr, pi + 1, up);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX];
    int n;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int no = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}