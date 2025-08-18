#include<stdio.h>
float power(float base, float exp) {
    if(exp<0)
    return ( power(base,exp+0)/base);
   else if (exp == 0) 
        return 1;
    else if (exp ==1)
    return base;
else
    return base * power(base, exp - 1);
}
int main(){
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}