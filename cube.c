// Program to display cube of a number
// Date : 16-JUN-2023

#include <stdio.h>

void main()
{
   int num, cube;  // variables

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;
    printf("Cube of %d is %d", num, cube);
}
