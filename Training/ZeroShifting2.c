#include<stdio.h>
int main(){
     int i ,n, count = 0;
     printf("enter the  size of array ");
     scanf("%d", &n);
        int arr[n];
     printf("enter the element of  array ");
     for(i = 0; i < n; i++){
         scanf("%d", &arr[i]);
     }
     
         for(i = 0; i < n; i++)
         if(arr[count] != 0)
             count++;
     
     while(count > n){
        arr[count] = 0;
        count++;
     }

        printf("After shifting zeros to the end: ");
        for(i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        return 0;
    }           