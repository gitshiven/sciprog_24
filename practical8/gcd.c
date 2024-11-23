#include <stdio.h>

// Function to compute GCD using an iterative method
int gcdIterative(int num1, int num2)
{
    int tempVal;
    while(num2 != 0)
    {
        tempVal = num2;
        num2 = num1 % num2;
        num1 = tempVal;
    }
    return num1;
}

// Function to compute GCD using a recursive method
int gcdRecursive(int num1, int num2)
{
    int remainder;
    if(num2 == 0)
    {
        return num1;
    }
    else
    {
        remainder = num1 % num2;
        num1 = gcdRecursive(num2, remainder);    
    }
    return num1;
}

int main(){
    int num1, num2, result;

    printf("Input two positive integers:\n");
    result = scanf("%d %d", &num1, &num2);
    if(result != 2)
    {
        printf("Please enter two integer values!\n");
        return 1;
    }
    if(num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive integers\n");
        return 1;
    }

    printf("GCD computed from iterative function for %d and %d is: %d\n", num1, num2, gcdIterative(num1, num2));
    printf("GCD computed from recursive function for %d and %d is: %d\n", num1, num2, gcdRecursive(num1, num2));

    return 0;
}
