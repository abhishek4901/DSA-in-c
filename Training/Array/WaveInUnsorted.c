#include<stdio.h>
int main(){
    int i,j,temp,n;
    printf("enter the size of array ");
    scanf("%d", &n);
    int  arr[n];
    printf("enter the element of  array :");

    for(i = 0 ; i < n ; i++ )
    scanf("%d", &arr[i]);

     for(i = 0 ; i < n ; i+2 )
     if( i != 0  && arr[i] < arr[i-1]){
     temp = arr[i];
     arr[i]= arr[i-1];
     arr[i-1]= temp;}

 if( i != n-1 && arr[i] < arr[i+1])
 {
    temp    = arr[i];
    arr[i] = arr[i+1];
    arr[i+1]= temp;
 }

 printf("wave from ");
 for ( i = 0; i <n; i++)
 {
   printf("%d ", arr[i]);

 }
 return 0;
}
 