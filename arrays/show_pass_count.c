//Fill 5 X 5 array with random numbers
//Date : 07-JUL-2023

#include <stdio.h>

void main()
{
   int i, j, count;
   int marks[5][5];

       srand(time(0));  // initialize seed

       for(i = 0; i < 5; i ++)
       {
           count = 0;
           for(j = 0; j < 5 ; j ++)
           {
              marks[i][j] = rand() % 100;
              printf("%5d", marks[i][j]);

              if(marks[i][j] >= 50)
                 count++;
           }
           printf("%5d\n", count);
       }
}
