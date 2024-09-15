/*
Problem D: Takes an integer as input and display the last digit and number of the digit.


Example:
    Input: 172234
    Result: 4 ( Last Digit), 6 (lenth)

*/

#include <stdio.h>

int main()
{
    int input, length = 0; // Declaring Variables

    printf("Enter an integer: ");

    scanf("%d", &input); // Getting User

    printf("Last digit: %d\n", input % 10); // Finding Last Digit

    // Handle the case when the input is 0
    if (input == 0)
    {
        length = 1;
    }
    else
    {
        while (input != 0) // Calculating the Length
        {
            input /= 10;
            length++;
        }
    }

    printf("Length of the input: %d\n", length);

    return 0;
}

// © Mushphyqur Rahman Tanveer