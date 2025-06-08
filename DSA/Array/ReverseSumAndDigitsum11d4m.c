#include<stdio.h>
int main () {
 int n=2345,num,sum=0 ,dsum=0, d1sum=0;
 
for (int  i = 0; i < n; i++)
{

    sum=sum+ (n%100);
    n=n/100;
}

printf("%d\n",sum);
for ( int i = 0; i < sum; i++)
{
    /* code */
    dsum+=sum%10;
    sum = sum/10;
}
printf("%d\n",dsum);  
for ( int i = 0; i <= dsum; i++)
{
    /* code */
    d1sum+=dsum%10;
    dsum = dsum/10;
}
printf("%d",d1sum);  



return 0;
}