/*
Problem C: Solves the following function:

f(x) = x^3+2|x|+5

Example:
    Input: -3
    Result: -16

*/

#include <stdio.h>
#include <math.h>   // for power fucntion
#include <stdlib.h> //stdlib.h for abs()

int main()
{
    int x, fValue; // Declaring Variable
    printf("Please Provide X Value: ");
    scanf("%d", &x);                                          // Taking user input
    fValue = pow(x, 3) + (2 * abs(x) + 5);                    // Calculating the Fucntion Value
    printf("When x = %d, f(x) = x^3+2|x|+5 = %d", x, fValue); // Print the fucntion Value

    return 0;
}

// © Mushphyqur Rahman Tanveer