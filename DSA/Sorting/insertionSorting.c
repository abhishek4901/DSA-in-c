#include<stdio.h>
#define Max 100
int InsertionSorting(int arr[Max], int n){
    
}
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
