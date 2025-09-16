#include <stdio.h>
int main() {
    int num, sum = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp>0) {
        rem = temp % 10;
        sum = sum+rem;
        temp = temp/10;
    }

 printf("%d ",sum);   
    return 0;
}
