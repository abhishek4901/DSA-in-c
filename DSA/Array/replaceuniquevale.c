#include <stdio.h>
void uniquevale(int a[])
{
    int pos,n,r;
    printf("Enter the search  number ");
    scanf("%d", &n);
    printf("Enter the replace  number ");
    scanf("%d", &r);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            a[i]=r;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[5] = {2, 3, 12, 41, 5}, n, i;

    uniquevale(a);
    return 0;
}
