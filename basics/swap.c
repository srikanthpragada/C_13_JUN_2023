// Program to swap two variables
// Date : 24-JUN-2023

#include <stdio.h>

void main()
{
   int  a,b, temp;

    // input
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    // output
    printf("%d %d",a,b);
}
