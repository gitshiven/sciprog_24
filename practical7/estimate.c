#include <stdio.h>

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double estimate_e(int order) {
    double estimate = 0.0;
    for (int i = 0; i <= order; i++) {
        estimate += 1.0 / factorial(i);
    }
    return estimate;
}

int main() {
    int order;
    printf("Enter the order of the polynomial (1-15): ");
    scanf("%d", &order);

    if (order < 1 || order > 15) {
        printf("Please enter an order between 1 and 15.\n");
        return 1;
    }
    
    double estimated_e = estimate_e(order);
    printf("Estimate of e with order %d: %.10f\n", order, estimated_e);
    printf("Actual value of e: 2.7182818285\n");

    return 0;
}
