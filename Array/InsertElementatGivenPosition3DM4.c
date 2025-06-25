#include <stdio.h>
#define MAX 100
int main()
{
    int arr[100], size, i, pos, x;
    printf("Enter the size of  array: ");
    scanf("%d", &size);
    printf("Enter elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position of element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    for (i = pos - 1; i < size ; i--) // travese the array positi
    arr[pos - 1] = x;                     // insert the element at given position
    printf("Array after insertion: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}