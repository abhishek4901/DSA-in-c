#include <stdio.h>
#define SIZE 10
int main() {
    printf("Enter size of element ");
    int n;
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter the element of array: ");
    for(i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }

     printf("Reversed array: ");
     for(i = n - 1; i >= 0; i--) {
         printf("%d ", arr[i]);
     }
     printf("\n");
     return 0;
}