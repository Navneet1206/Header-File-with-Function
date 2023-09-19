#include<stdio.h>
#include"power.h"

int main()
{
    int x,y;

    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter First Number : ");
    scanf("%d",&y);

    printf("%d  raised to power %d = %d",x,y,power(x,y));


    return 0;
}