//Fill diag and anti-diag cells with 1 and rest 0
//Date : 08-JUL-2023

#include <stdio.h>

void main()
{
   int i, j;
   int a[5][5];

       for(i = 0; i < 5; i ++)
       {
           for(j = 0; j < 5 ; j ++)
           {
               if(i == j || i + j == 4)
                    a[i][j] = 1;
               else
                    a[i][j] = 0;

               printf("%5d", a[i][j]);
           }
           printf("\n");
       }
}
