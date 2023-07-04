//Fill array with random numbers
//Date : 4-JUL-2023

#include <stdio.h>

void main()
{
   int i;
   int a[10];

       srand(time(0));  // initialize seed

       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           printf("%d\n", a[i]);
       }
}
