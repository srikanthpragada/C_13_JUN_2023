//Pointer vs. array
//Date : 13-JUL-2023

#include <stdio.h>


void main()
{
 int a[5] = {1,2,3,4,5};

     printf("%u \n", a);
     printf("%u \n", &a[0]);
     printf("%u \n", a[0]);
     printf("%u \n", *a);
}


