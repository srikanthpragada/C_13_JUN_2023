//Take a number and display whether it is divisible by 2 and 3
//Date : 28-JUN-2023

#include <stdio.h>

void main()
{
 int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
       if(num % 3 == 0)
          printf("Div by 2 and 3");
       else
          printf("Div by 2");
    }
    else
    {
        if(num % 3 == 0)
            printf("Div by 3");
        else
            printf("Div by None");
    }
}
