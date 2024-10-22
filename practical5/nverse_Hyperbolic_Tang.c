#include <stdio.h>
#include <math.h>

// Function to calculate arctanh using Maclaurin series
double artanh1(double x, double delta) {
    double result = 0.0;
    double term = x;
    int n = 1;
    
    // Summing the series until the terms become smaller than delta
    while (fabs(term) >= delta) {
        result += term;  // Add the current term to the result
        n += 2;          // Increment n by 2 for the next term
        term = pow(x, n) / n;  // Calculate the next term in the series
    }
    
    return result;
}

// Function to calculate arctanh using natural logarithms
double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta;
    printf("Enter the precision value delta: ");
    scanf("%lf", &delta);

    // Range of x values [-0.9, 0.9] sampled every 0.01
    for (double x = -0.9; x <= 0.9; x += 0.01) {
        double result_maclaurin = artanh1(x, delta);
        double result_log = artanh2(x);
        
        // Print the results from both methods and their difference
        printf("x = %.2f | Maclaurin: %.10f | Logarithm: %.10f | Difference: %.10f\n",
               x, result_maclaurin, result_log, fabs(result_maclaurin - result_log));
    }

    return 0;
}
