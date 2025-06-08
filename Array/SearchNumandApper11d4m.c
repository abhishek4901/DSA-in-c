#include<stdio.h> 
#define MAX 100
int main(){
    int i, b, n,a[MAX], count=0;
    int *ptr;
    ptr = a;// pointer to array
    printf("Enter the number of array: "); 
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &b);
    for (i = 0; i < n; i++){
        // if (a[i] == b){
        if (*(ptr+i) == b){//(ptr+i) is same as a[i] that is store in memeory)
            count++;
        }
    }
    printf("Total Apperance = %d\n", count);  
    return 0 ;
    }
    


