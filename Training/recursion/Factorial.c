 #include<stdio.h>
int fact(int n){
    if(n==0|| n==1)
    return 1 ; 
    else  
    return fact(n-1)*n;  
}
int main(){
 int n;
 printf("enter the number ");
 scanf("%d",&n);
 fact(n);
    printf("Factorial is %d\n",  fact(n));
}
