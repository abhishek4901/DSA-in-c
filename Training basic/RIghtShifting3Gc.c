#include<stdio.h>
int main() {
    int i, n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], temp;
    
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    
    printf("After shifting zeros to the end: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}