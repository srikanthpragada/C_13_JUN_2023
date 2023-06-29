//Take 5 numbers and display sum
//Date : 29-JUN-2023

#include <stdio.h>

void main()
{
 int num, i, sum = 0;


      for(i = 1; i <= 5  ; i ++)
      {
         printf("Enter number :");
         scanf("%d", &num);

         sum += num;
      }

      printf("Sum = %d", sum);
}
