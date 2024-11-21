# Trapezoidal Rule for Numerical Integration

This program computes the integral of a function using the **trapezoidal rule**, a numerical method for approximating definite integrals.

---

## Function and Integral
- **Function**: \( f(x) = \tan(x) \)
- **Interval**: \([0, \pi/3]\)
- **Exact Integral**: \( \ln(2) \)

---

## How It Works
1. **Trapezoidal Rule**:
   - The interval is divided into \( N = 12 \) sub-intervals.
   - The function is evaluated at the boundaries and midpoints of the sub-intervals.
   - The integral is approximated by summing the areas of trapezoids.

2. **Comparison**:
   - The approximate result is compared with the exact integral value (\( \ln(2) \)).
   - The difference between the approximate and exact results is displayed.

---

## Output
- Approximate integral value.
- Exact integral result.
- Difference between approximate and exact values.

Output:
Approximate value of the integral: 0.695045
Exact result: 0.693147
Difference: 0.001898  
