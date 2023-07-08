//Fill 5 X 5 array with random numbers and display sum of each row
//Date : 08-JUL-2023

#include <stdio.h>

void main()
{
   int i, j, sum;
   int marks[5][5];

       srand(time(0));  // initialize seed

       for(i = 0; i < 5; i ++)
       {
           sum = 0;
           for(j = 0; j < 5 ; j ++)
           {
              marks[i][j] = rand() % 100;
              printf("%5d", marks[i][j]);
              sum += marks[i][j];
           }
           printf("%5d\n", sum);
       }
}
