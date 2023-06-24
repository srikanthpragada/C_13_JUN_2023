//Take number and display its sign
//Date : 24-JUN-2023

#include <stdio.h>

void main()
{
 int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if (num >= 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }

}
