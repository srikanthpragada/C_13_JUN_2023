//Display the position of last occurrence
//Date : 06-JUL-2023

#include <stdio.h>

void main()
{
   int i, num;
   int a[10];

       srand(time(0));  // initialize seed

       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           printf("%5d", a[i]);
       }

       printf("\nEnter number :");
       scanf("%d", &num);

       for(i = 9; i >= 0; i --)
       {
           if(num == a[i])
           {
               printf("Found at %d", i);
               break;
           }
       }

       if(i < 0)
         printf("Sorry! Number not found!");

}
