# Magic Square Checker

This program checks if a given matrix is a magic square. A magic square is an n-sided matrix where the sum of values in each row, column, and both main diagonals are equal to \( \frac{n(n^2 + 1)}{2} \).

## Files

- `main.c`: Contains the implementation of the magic square checker.
- `magic_square.h`: Header file with function prototypes.

## How to Compile and Run

### Prerequisites

Ensure you have a C compiler installed, such as GCC. You can verify this by running the following command in your terminal:
```sh
gcc --version

gcc -o magic_square_checker main.c -lm

## Running the program
./magic_square_checker

Enter file name: matrix.txt

Enter file name: matrix.txt
M = 15
Row 1 does not sum to 15 (row sum = 14).
This is not a magic square

Enter file name: matrix.txt
M = 15
This is a magic square


