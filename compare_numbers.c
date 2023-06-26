//Take two numbers and display their relationship
//Date : 26-JUN-2023

#include <stdio.h>

void main()
{
 int n1,n2;

    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);

    if(n1 > n2)
        printf("First > Second");
    else
        if(n2 > n1)
           printf("Second > First");
        else
           printf("Equal");
}
