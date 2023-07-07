//Fill 5 X 5 array with random numbers
//Date : 07-JUL-2023

#include <stdio.h>

void main()
{
   int i, j, num, found = 0;
   int a[5][5];

       srand(time(0));  // initialize seed

       for(i = 0; i < 5; i ++)
       {
           for(j = 0; j < 5 ; j ++)
           {
              a[i][j] = rand() % 100;
              printf("%5d", a[i][j]);
           }
           printf("\n");
       }

       printf("\nEnter number :");
       scanf("%d", &num);

       for(i = 0; i < 5 && !found; i ++)
       {
           for(j = 0; j < 5 ; j ++)
           {
              if(a[i][j] == num)
              {
                  printf("Found at %d,%d\n",i,j);
                  found = 1;
                  break;
              }
           }

           //if(found)
           //   break; // terminate outer loop
       }
}
