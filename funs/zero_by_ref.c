//Function to set parameter to 0 using pass by reference (address)
//Date : 13-JUL-2023

#include <stdio.h>

void zero(int * p)
{
   *p = 0;
}

void main()
{
 int n = 100;

     zero(&n);
     printf("%d ", n);
}


