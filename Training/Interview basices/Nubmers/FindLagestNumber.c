//find the largest number among three numbers using if else ladder
// #include<stdio.h>
// int main (){
    //     int a,b,c;
    //     printf("Enter the three numbers:");
    //     scanf("%d%d%d",&a,&b,&c);
    //     if( a>b&&a>c){
        //         printf("a is the largest number%d",a);
        //     }
        //     else if(b>a&&b>c){
            //         printf("b is the largest number%d",b);
            //     }
            //     else{
                //         printf("c is the largest number=%d",c);
                //     }
                
                //     return 0;
                // }
                
 //find the largest number among three numbers using nested if else
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the greater number = %d", a);
        }
        else{
            printf("c is the greater number =%d",c);        
        }
    }
    else{
        if(b>c){
            printf("b is the greater number = %d",b);
        }
        else{
            printf("c is the greater number = %d",c);
        }
    return 0;
    }
}