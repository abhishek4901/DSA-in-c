#include <stdio.h>

int main() {
    int i, n, count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // move non-zero elements to front
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // fill rest with zeros
    while (count < n) {
        arr[count++] = 0;
    }

    printf("After shifting zeros to the end: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
