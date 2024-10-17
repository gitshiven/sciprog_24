#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define ARRAY_SIZE 13

double tan_values[ARRAY_SIZE];

double degrees_to_radians(double degrees) {
    return degrees * (PI / 180.0);
}

double f(double x) {
    return tan(x);
}

void calculate_tan_values() {
    for (int i = 0; i <= 12; i++) {
        double degrees = i * 5;
        double radians = degrees_to_radians(degrees);
        tan_values[i] = f(radians);
    }
}

double trapezoidal_rule(double a, double b, int N) {
    double step = (b - a) / N;
    double sum = f(a) + f(b);

    for (int i = 1; i < N; i++) {
        double x_i = a + i * step;
        sum += 2 * f(x_i);
    }

    return (b - a) * sum / (2 * N);
}

int main(void) {
    // Calculate tan(x) values for every 5 degrees from 0 to 60
    calculate_tan_values();

    // Print the array with tan(x) values
    printf("tan(x) values for every 5 degrees from 0 to 60:\n");
    for (int i = 0; i <= 12; i++) {
        printf("tan(%d degrees) = %lf\n", i * 5, tan_values[i]);
    }

    // Calculate the area under the curve of tan(x) from 0 to 60 degrees using the trapezoidal rule
    int N = 12;
    double a = degrees_to_radians(0);
    double b = degrees_to_radians(60);
    double integral_approx = trapezoidal_rule(a, b, N);
    double exact_result = log(2);  

    
    printf("The value of the integral (trapezoidal approximation) is: %lf\n", integral_approx);
    printf("Exact result: %lf\n", exact_result);
    printf("Difference: %lf\n", fabs(integral_approx - exact_result));

    return 0;
}
