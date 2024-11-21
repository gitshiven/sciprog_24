# Fibonacci Series Calculation

This program calculates the Fibonacci series up to a given number of terms. The Fibonacci series is a sequence where each number is the sum of the two preceding ones, usually starting with 0 and 1.

## Files

- `main.c`: Contains the implementation of the program.

## How to Compile and Run

1. **Ensure you have a C compiler** installed, such as GCC.
2. **Open a terminal** in the directory containing `main.c`.
3. **Compile the code** using the following command:
   ```sh
   gcc -o fibonacci main.c

## Output
Enter the value of n: 10
Fibonacci series up to 10:
0 1 1 2 3 5 8 13 21 34

Enter the value of n: -5 Please enter a positive integer.
---
Enter the precision value delta: 0.0001
x = -0.90 | Maclaurin: -1.4722196249 | Logarithm: -1.4722194896 | Difference: 0.0000001352
x = -0.89 | Maclaurin: -1.4382743034 | Logarithm: -1.4382741770 | Difference: 0.0000001263
x = -0.88 | Maclaurin: -1.4050640043 | Logarithm: -1.4050638847 | Difference: 0.0000001197
...
x = 0.89 | Maclaurin: 1.4382743034 | Logarithm: 1.4382741770 | Difference: 0.0000001263
x = 0.90 | Maclaurin: 1.4722196249 | Logarithm: 1.4722194896 | Difference: 0.0000001352

