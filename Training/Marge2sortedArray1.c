#include <stdio.h>
#define SIZE 10
int main() {
    int n=3, i, j, k = -1;
    int arr1[n], arr2[n], Arr3[SIZE];
    printf("Enter the element of first array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the element of second array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
for(i =0, j=0; i<n && j<n; ) {
    if(arr1[i] < arr2[j]) {
        Arr3[++k] = arr1[i++];
    } else {
        Arr3[++k] = arr2[j++];
    }
}
while(i < n) {
    Arr3[++k] = arr1[i++];
}
while(j < n) {
    Arr3[++k] = arr2[j++];
}

    printf("Merged sorted array: ");
    for(i = 0; i <= k; i++) {
        printf("%d ", Arr3[i]);
    }
return 0;
}