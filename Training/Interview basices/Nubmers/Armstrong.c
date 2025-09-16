#include <stdio.h>
int main() {
    int num, sum = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp>0) {
        rem = temp % 10;
        sum = sum+(rem * rem * rem);
        temp = temp/10;
    }
if(num==sum)    
 printf("Number %d is armstrong  number ", num);   //125 = 1^3 + 2^3 + 5^3 that is armstrong number
 else    
 printf("Number %d is not  armstrong  number ", num);    
    return 0;
}
