# Number Operations in C

This repository contains two C programs:

1. **Harmonic Series Summation**  
   - Calculates the sum of a harmonic series in ascending and descending order.  
   - Outputs both sums and their difference to observe precision differences.

2. **Binary Conversion & Digit Count**  
   - Converts an integer to its binary representation.  
   - Converts the integer to a float and calculates the binary digits required.  
   - Outputs the integer, its float equivalent, and its binary form.

## How to Run
1. Compile the program:  
   ```bash
   gcc -o sum_ sum.c -lm
   gcc -o conversion_ conversion.c -lm


Output:
Harmonic Series:
First Sum = 7.485478, Second Sum = 7.485472, Difference = 0.000006

Binary Conversion:
The number of digits = 25, intNumber = 33554431, floatNumber = 33554432.0, Binary = 11111111111111111111111111
