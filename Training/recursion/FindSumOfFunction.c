#include <stdio.h>

int sumofSeries(int n) {
    float x;
    if (n == 1)
        return 1;
    else {
        x=n;
        if (n % 2 == 0)
            return (sumofSeries(n - 1) - 1 / x);
        else
            return (sumofSeries(n - 1) + 1 / x);
    }
}

int main() {
    int n;
    printf(" enter the number like this 1-1/2+1/3-1/4+...1/n ");
    scanf("%d", &n);
    printf("Sum of series up to %d terms is: %d\n", n, sumofSeries(n));
    return 0;
}
