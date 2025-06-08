#include<stdio.h>
#define MAX 100
int main ()
{
    int n, *p, i, jEven=0,jOdd=0, a[MAX], b[MAX], c[MAX];
    printf("Enter the number of array: ");
    scanf("%d", &n);
    p = a;
    printf("Enter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i++){
        if (*(p + i) % 2 == 0){//
            b[jEven++] = *(p + i);}
        else{    
            c[jOdd++] = *(p + i);
        
        }}
            b[jEven] = -1;
    c[jOdd] = -1;
    printf("Even numbers are: ");
    for (i = 0; b[i] != -1; i++){

        printf("%d ", b[i]);
    }

    printf("\nOdd numbers are: ");
    for (i = 0; c[i] != -1; i++){

        printf("%d ", c[i]);
    }
    return 0;   
}