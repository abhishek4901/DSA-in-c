#include<stdio.h>
int main (){
    int arr[100]={2,1,5,-4,-10,-3,1,6},i=0,j=0;
    int n=8;    // size of array
    int pos[100],neg[100]; // arrays to store positive and negative numbers             

    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos[j]=arr[i]; // store positive numbers in pos array
            j++;
        }
    }
    pos[j]='\0'; // null terminate the array
    j=0; // reset j for negative numbers
    for(i=0;i<n;i++){
        if(arr[i]<0){
            neg[j]=arr[i]; // store negative numbers in neg array
            j++;
        }
    }
    neg[j]='\0'; // null terminate the array
    printf("Positive numbers are: ");
    for(i=0;i<j;i++){
        printf("%d ",pos[i]); // print positive numbers
    }
    printf("\nNegative numbers are: ");
    for(i=0;i<j;i++){
        printf("%d ",neg[i]); // print negative numbers
    }
    printf("\n");
    return 0;   
}
   