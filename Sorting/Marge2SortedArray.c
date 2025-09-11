#include<stdio.h>
int main() {
    int num1[] = {2, 5, 8, 10, 12, 14};
    int num2[] = {3, 11, 12, 13, 14}; 
    int m = 6, n = 5;
    int num3[11]; 
    int i = 0, j = 0, k = 0;

    
    while (i < m && j < n) {
        if (num1[i] < num2[j])
            num3[k++] = num1[i++];
        else
            num3[k++] = num2[j++];
    }

   
    while (i < m)
        num3[k++] = num1[i++];
    while (j < n)
        num3[k++] = num2[j++];

   
    for (i = 0; i < k; i++)
        printf("%d ", num3[i]);
    
    return 0 ;
}