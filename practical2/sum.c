#include <stdio.h>

int main(void) {
    // Declare variables
    int index;
    float firstSum, secondSum, difference;

    // First sum
    firstSum = 0.0;
    for (index = 1; index <= 1000; index++) {
        firstSum = firstSum + 1.0 / (float) index;
    }

    // Second sum
    secondSum = 0.0;
    for (index = 1000; index > 0; index--) {
        secondSum = secondSum + 1.0 / (float) index;
    }
    printf("First Sum = %f\n", firstSum);
    printf("Second Sum = %f\n", secondSum);

    // Find the difference
    difference = firstSum - secondSum;

    printf("Difference between the two is %f\n", difference);

    return 0;
}
