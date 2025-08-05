#include <stdio.h>
#define SIZE 10
int main() {
 int i ,  n,j;
 printf("Enter nummber of elements ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements",  n);
 for(i = 0; i <n; i++) {
     scanf("%d", &arr[i]);
 }   
  for(i = 0; i < n; i++) {
     for(j = i + 1; j < n; j++) {

         if(arr[i] == arr[j]) {
             for(int k = j; k < n - 1; k++) {// find duplicate and shift elements
                 arr[k] = arr[k + 1]; //swapping elements
             }
             n--;
             j--;
         }
     }
}
printf("Array after removing duplicates");
for(i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
return 0;
}
