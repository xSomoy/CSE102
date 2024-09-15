/* Inputs Two Numbers, Displays the minimum Number
Ex:
    Input: 10 30
    Result: 10
*/

#include <stdio.h>

int main(){
    int a; // int type variable 2 byte memory allocated
    int b;
    printf("Please Input First Number:");
    scanf("%d",&a);
    printf("Please Input Second Number:");
    scanf("%d",&b);
    if(a<b){
        printf("Minimum Number is %d",a);
    }
    else{
        printf("Minimum Number is %d",b);
    }
}
// © Mushphyqur Rahman Tanveer
