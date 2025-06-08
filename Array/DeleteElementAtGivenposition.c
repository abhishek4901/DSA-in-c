#include<stdio.h>
int main ()
{
    int arr[100],size,i,pos,x;
    printf("Enter the size of  array: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position of element: ");
    scanf("%d",&pos);   
    printf("Enter the element to delete: ");
    scanf("%d",&x);
    for(i=0;i<size;i++)
        if(arr[i]==arr[pos-1])
        {
            arr[pos-1]=x;
        }
    for(i=pos-1;i<size-1;i++)
        arr[i]=arr[i+1];
    size--;
    printf("Array after deletion: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}