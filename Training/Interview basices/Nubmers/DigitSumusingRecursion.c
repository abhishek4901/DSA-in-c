#include <stdio.h>

int sumOfDigits(int n){
    if(n == 0){return 0;}
else  

    return (n % 10) + sumOfDigits(n / 10);
}

int main(){
    int n ;

printf("enter the number");
scanf("%d",&n);
sumOfDigits(n);
    printf("%d", sumOfDigits(n));

    return 0;
}
