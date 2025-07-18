#include <stdio.h>
#define MAX 50

int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i+1;  
        } 
    }  
    return -1; 
}
int main() {
    int i, n, value, arr[MAX];
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number you want to search: ");
    scanf("%d", &value);

    int result = linearSearch(arr, n, value);
    if (result != -1) {
        printf("Element found at position %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
