 #include <stdio.h> 
 int main() { 
      int i,j,n, temp ;
      printf("enter the size of the array: ");
      scanf("%d", &n);
      int arr[n];
      printf("enter the elements of the array: ");
      for(i=0;i<n;i++) {
          scanf("%d", &arr[i]);
      }
      for(i=0;i<n;i++) {
          for(j=n-1;j>i;j--) {
          if(arr[i]==0 && arr[j]!= 0) {
                 temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              } 
              
          }
      }
      printf("Array after right shifting zeros: ");
      for(i=0;i<n;i++) {
          printf("%d ", arr[i]);
      }
      return 0;
 }