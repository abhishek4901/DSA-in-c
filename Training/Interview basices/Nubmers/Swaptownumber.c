#include <stdio.h>
// Function to swap values using call by reference
void swap(int *a, int *b) {
    int temp = *a;  // Store the value of a in temp
    *a = *b;         // Assign the value of b to a
    *b = temp;       // Assign the value of temp (old a) to b
    printf("After swap: x = %d, y = %d\n", *a, *b);
}
int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    // Call the swap function by passing addresses of x and y
    swap(&x, &y);    
    return 0;
}


// #include<stdio.h>
// int main (){
//     int x = 10, y = 20 , temp;
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     printf("with temp variable\n");
//     temp = x;
//     x = y;
//     y = temp;
//     printf("After swap: x = %d, y = %d\n", x, y);
//     printf("without temp variable\n");
//     x = x + y;
//     y = x - y;
//     x = x - y;
//     printf("After swap: x = %d, y = %d\n", x, y);
//     return 0;
// }
