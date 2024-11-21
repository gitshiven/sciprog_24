#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    // Declare variables
    int index, intNumber, tempNumber, numberOfDigits;
    float floatNumber;
    char binaryNumber[60];

    // Initialize 4-byte integer
    intNumber = 33554431;
    // Convert to 4-byte float
    floatNumber = (float) intNumber;

    // Convert to binary number (string)
    index = 0; 
    tempNumber = intNumber;
    while (tempNumber > 0) {
        sprintf(&binaryNumber[index], "%1d", tempNumber % 2);
        tempNumber = tempNumber / 2;
        index++;
    }

    // Terminate the string
    binaryNumber[index] = '\0';

    // Reverse the string binaryNumber
    int length, mid, reverseIndex;
    char auxiliary;
    length = strlen(binaryNumber);
    mid = length / 2;
    for (index = 0; index < mid; index++) {
        reverseIndex = length - index - 1;
        auxiliary = binaryNumber[index];
        binaryNumber[index] = binaryNumber[reverseIndex];
        binaryNumber[reverseIndex] = auxiliary;
    }

    // Calculate the number of digits
    numberOfDigits = ceil(logf(floatNumber) / logf(2));
    printf("The number of digits is %d\n", numberOfDigits);

    printf("intNumber=%d, floatNumber=%f, intNumber in binary=%s\n", intNumber, floatNumber, binaryNumber);

    return 0;
}
