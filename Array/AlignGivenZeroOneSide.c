#include<stdio.h>
int main (){
    int arr[100]={0,1,1,1,0,0,1,1},size,i,j,temp;
    size=8;
    printf("Before sorting: "); 
    for(i=0;i<size;i++)    
        printf("%d ",arr[i]);
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){ 
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter sorting: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<size;i++){
        if(arr[i]==0){
            arr[i]=1;
        }
    }
    for(i=0;i<size;i++){
        if(arr[i]==1){
            arr[i]=0;
        }
    }    
    return 0;
}
