# Tan(x) Calculation and Trapezoidal Rule Integration

This program calculates the values of the tangent function for angles from 0 to 60 degrees in increments of 5 degrees, and then uses the trapezoidal rule to approximate the integral of the tangent function over this interval. The exact result is compared with the approximation.

## Files

- `trapezoid.c`: Contains the implementation of the program.

## How to Compile and Run

1. **Ensure you have a C compiler** installed, such as GCC.
2. **Open a terminal** in the directory containing `trapezoid.c`.
3. **Compile the code** using the following command:
   ```sh
   gcc -o tan_integration trapezoid.c -lm

## Output

   tan(x) values for every 5 degrees from 0 to 60:
tan(0 degrees) = 0.000000
tan(5 degrees) = 0.087488
tan(10 degrees) = 0.176327
tan(15 degrees) = 0.267949
tan(20 degrees) = 0.364000
tan(25 degrees) = 0.466308
tan(30 degrees) = 0.577350
tan(35 degrees) = 0.700208
tan(40 degrees) = 0.839100
tan(45 degrees) = 1.000000
tan(50 degrees) = 1.191754
tan(55 degrees) = 1.428148
tan(60 degrees) = 1.732051

The value of the integral (trapezoidal approximation) is: 0.695421
Exact result: 0.693147
Difference: 0.002274


