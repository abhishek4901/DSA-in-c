#include<stdio.h>
#define Max 100
// 1.43, 3.23, 3.2 ,6.65 , 

int main(){
     int  value ,n=5;
     float temp; 
     float inputarr[5] = {0.43, 0.23, 0.2 ,0.65};
     float bucket[Max];
     for (int i = 0; i < n-1; i++)
     {
        temp = inputarr[i]*10;
        value= temp;
        printf(" \n %d", value);
     }
     for (int  i = 0; i < n-1; i++)
     {
        
        scanf("%d", &bucket[Max]);
     }
     
     for (int  i = 0; i < n-1; i++)
     {
        
        printf("%d", bucket[Max]);
     }
     
return 0 ;
}