//Count how many times a number is present in the array
//Date : 06-JUL-2023

#include <stdio.h>

void main()
{
   int i, num, count = 0;
   int a[10];

       srand(time(0));  // initialize seed

       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           printf("%5d", a[i]);
       }

       printf("\nEnter number :");
       scanf("%d", &num);

       for(i = 0; i < 10; i ++)
       {
           if(num == a[i])
              count ++;
       }

       printf("Count = %d", count);

}
