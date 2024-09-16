/*
Problem: Write a C Program that finds out and prints the size of
integer double and character type array.
*/
#include <stdio.h>
int main()
{
    int a[10];
    double b[10];
    char c[10];
    printf("Integer Array with size of 10 has %d bytes\n", sizeof(a));
    printf("Double Array with size of 10 has %d bytes\n", sizeof(b));
    printf("Character Array with size of 10 has %d bytes\n", sizeof(c));
    return 0;
}

// © Mushphyqur Rahman Tanveer