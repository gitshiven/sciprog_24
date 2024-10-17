#include <stdio.h>
#include <math.h>

double f(double x) {
    return tan(x);
}

int main(void) {
    
    int N = 12;
    double a = 0.0;
    double b = M_PI / 3;  
    double step = (b - a) / N;  
    double sum = f(a) + f(b);
    for (int i = 1; i < N; i++) {  
        double x_i = a + i * step;
        sum += 2 * f(x_i);                 
    }

    // Compute the approximate integral using the trapezoidal rule
    double integral_approx = (b - a) * sum / (2 * N);
    double exact_result = log(2);  // Exact value of the integral

    // Print the results
    printf("Approximate value of the integral: %lf\n", integral_approx);
    printf("Exact result: %lf\n", exact_result);
    printf("Difference: %lf\n", fabs(integral_approx - exact_result));

    return 0;
}
