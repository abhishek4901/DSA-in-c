#include<stdio.h>

#define SIZE 10
int main() {
    int  n , i, L, sl;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    L = sl = -1;
    for(i = 0; i < n; i++) {
        if(arr[i] > L) {
            sl = L;
            L = arr[i];
        } else if(arr[i] > sl && L<arr[i] ) {
            sl = arr[i];
        }
    }
    printf("The largest element is: %d\n", L);
    printf("The second largest element is: %d\n", sl);
    return 0;
}
