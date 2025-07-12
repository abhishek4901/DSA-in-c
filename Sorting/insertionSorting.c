#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX], size, i, j, minIndex, temp;

    // Input array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // ✅ Selection Sort logic
    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap arr[i] with arr[minIndex]
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Print sorted array
    printf("Array after Selection Sort: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
