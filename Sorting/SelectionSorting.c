#include <stdio.h>
void SelectionSorting(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if ( arr[min_idx] > arr[j] ) {
                min_idx = j;
            } 
        } 
        // Swap arr[i] and arr[min_idx]
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    
    }
    printf("Sorted array: ");
   for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SelectionSorting(arr, n);
    return 0;
}
