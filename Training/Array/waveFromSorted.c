 #include<stdio.h>
#define SIZE 10
int main() {
    int n; printf("Enter the size of array: ");
    scanf("%d", &n);    
     printf("Enter the elements of array: ");   
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && i + 1 < n )
        {
            
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
