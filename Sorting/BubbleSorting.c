#include <stdio.h>
#define MAX 100
int main() 
{  
    int i, j, n, temp;   
    int arr[MAX]; 
    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Bubble sorting
    for (i = 0; i < n - 2; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf(" After Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
