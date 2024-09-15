/*
Problem A: Takes Two Cooridinates as input and displays their distance
Example:
    Input: 0.0 1.0 0.0 7.0
    Result: 6.0

Formula:  Distance = √(x2−x1)^2+(y2−y1)^2

*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, distance; // Declaring variables
    printf("Please provide coordinates Values in following order x1 y1 x2 y2:\n");

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);               // Taking user input
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // Calulating the distance

    printf("Distance: %0.3f", distance); // Printing the Distance value 3 decimal position.

    return 0;
}

// © Mushphyqur Rahman Tanveer