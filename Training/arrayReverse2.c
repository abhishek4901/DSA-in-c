#include <stdio.h>
#define SIZE 10
int main() {
    printf("Enter size of element ");
    int n ,i ,j ;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of array: ");
    for(i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
 for(i=0, j=n-1; i<j; i++, j--) {
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
     }
     printf("Reversed array: ");
     for(i = 0; i < n; i++) {
         printf("%d ", arr[i]);
     }
     printf("\n");
     return 0;
}