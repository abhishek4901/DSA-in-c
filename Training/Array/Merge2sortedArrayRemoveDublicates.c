#include <stdio.h>
#define SIZE 100 // Large enough size for merged array

int main() {
    int n, m, i, j, k = 0;

    // Input sizes
    printf("Enter the size of Array 1: ");
    scanf("%d", &n);
    int arr1[n]; 

    printf("Enter the elements of first array (sorted): ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of Array 2: ");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter the elements of second array (sorted): ");
    for(i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int Arr3[n + m];
    for(i = 0, j = 0; i < n && j < m;) {
        if(arr1[i] < arr2[j]) {
            Arr3[k++] = arr1[i++];
        } else if(arr1[i] > arr2[j]) {
            Arr3[k++] = arr2[j++];
        } else {
            Arr3[k++] = arr1[i++];
            j++; // Skip duplicate from arr2
        }
    }

    // Add remaining elements
    while(i < n) {
        Arr3[k++] = arr1[i++];
    }
    while(j < m) {
        Arr3[k++] = arr2[j++];
    }
    // Print final array
    printf("Merged sorted array without duplicates: ");
    for(i = 0; i < k; i++) {
        printf("%d ", Arr3[i]);
    }

    return 0;
}
