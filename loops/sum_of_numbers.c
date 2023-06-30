//Sum of numbers until 0 is given
//Date : 30-JUN-2023

#include <stdio.h>

void main()
{
 int num, total = 0;

      while(1)
      {
          printf("Enter number [0 to stop]:");
          scanf("%d", &num);
          if(num == 0)
            break;

          total += num;
      }

      printf("Total = %d", total);
}
