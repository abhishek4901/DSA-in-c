#include<stdio.h>
#define MAX 100
void minvalue(int a[], int n)
{
    int i, min;
    min = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    printf("Minimum value is: %d\n", min);}
    void maxvalue(int a[], int n)
{
    int i, max;
    max = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    printf("Maximum value is: %d\n", max);}
 int main()
 {
    int a[MAX],n, i;
    printf("Enter numbers: of array ");
    scanf("%d", &n);
    printf("Enter arrays value:\n" );
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   
    minvalue(a, n);
    maxvalue(a, n);
    return 0;
 }