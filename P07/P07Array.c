/*
Array -> Print 10 values
*/
#include <stdio.h>

int main()
{
    int a[9];
    int i;
    for (i = 0; i <= 9; i++)
    {
        scanf("%d\n", &a[i]);
    }
    i = 0;
    do
    {
        printf("%d\n", a[i]);
        i++;
    } while (i <= 9);
    return 0;
}
