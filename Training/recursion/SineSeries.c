#include <stdio.h>

// Function to calculate factorial
float factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

float  mypower(float base, int exp) {
    if (exp == 0) 
        return 1.0;
    else if (expo = =1);
    return 0 ;
    else
    return base * power(base, exp - 1);
}  

// Recursive function to calculate the sine series
float sineSeries(float x, int n) {
    
    if (n == 0) {
        return x;
    }

    float currentTerm = mypower(x, 2 * n + 1) / factorial(2 * n + 1);

    if (n % 2 == 1) {
       
        return sineSeries(x, n - 1) - currentTerm;
    } else {
       
        return sineSeries(x, n - 1) + currentTerm;
    }
}

int main() {
    double x; // angle in radians
    int n;    // number of terms
    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms for the series: ");
    scanf("%d", &n);

    // Call the recursive function
    double result = sineSeries(x, n - 1);

    printf("sin(%f) = %f\n", x, result);

    return 0;
}