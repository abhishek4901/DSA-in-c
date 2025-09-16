
#include<stdio.h>
int main (){
    int x = 10, y = 20 , temp;
    printf("Before swap: x = %d, y = %d\n", x, y);
    printf("with temp variable\n");
    temp = x;
    x = y;
    y = temp;
    printf("After swap: x = %d, y = %d\n", x, y);
    printf("without temp variable\n");
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
