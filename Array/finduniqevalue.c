#include <stdio.h>
void uniquevale(int a[])
{
    int pos,n, temp;
    printf("Enter the search  number ");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            temp = a[i];
             pos = i;
            break;
        }
    }
    if(n==temp){
        printf("index no: %d\n", pos);// start to 0
        printf("Position: %d\n", pos+1);//start to 1
    }
   
    else
        printf(" not found in the array\n");
}
int main()
{
    int a[5] = {2, 3, 12, 41, 5}, n, i;

    uniquevale(a);
    return 0;
}
