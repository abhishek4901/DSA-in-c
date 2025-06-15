#include<stdio.h>
 #define MAX 100
int main (){
    int arr[MAX],size,i,j,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++){ 
        scanf("%d",&arr[i]);
        }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){ 
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nLargest element in the array: %d", arr[size-1]);
    printf("\nSmallest element in the array: %d\n", arr[0]);

    return 0;
}
