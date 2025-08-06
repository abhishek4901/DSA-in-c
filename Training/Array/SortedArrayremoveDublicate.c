#include <stdio.h>
#define SIZE 10
int main() {
    int i, n;
    printf("Enter size of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i+1]) {
            for(int k = i+1; k < n - 1; k++) {
                arr[k] = arr[k + 1];
            }
            n--;
            i--;
        }
    }
    printf("Array after removing duplicates: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}