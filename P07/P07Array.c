/*
Array -> Print 10 values
*/
#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i <10; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( int i =0; i < 10; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
