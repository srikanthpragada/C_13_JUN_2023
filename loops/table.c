//Print table for the given number
//Date : 29-JUN-2023

#include <stdio.h>

void main()
{
 int num, i;

      printf("Enter number :");
      scanf("%d", &num);

      for(i = 1; i <= 10; i ++)
      {
          printf("%3d * %2d = %4d\n", num, i, num * i);
      }

}
