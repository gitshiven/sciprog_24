#include <stdio.h>

void fibonacci(int n) {
    int f0 = 0, f1 = 1, fn;
    
    if (n >= 1) {
        printf("%d ", f0);
    }
    if (n >= 2) {
        printf("%d ", f1);
    }

    for (int i = 2; i < n; i++) {
        fn = f0 + f1;
        printf("%d ", fn);
        f0 = f1;
        f1 = fn;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series up to %d:\n", n);
        fibonacci(n);
    }
    
    return 0;
}
