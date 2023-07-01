//Avg of positive numbers until 0 is given
//Date : 1-JUL-2023

#include <stdio.h>

void main()
{
 int num, total = 0, count = 0;

      while(1)
      {
          printf("Enter number [0 to stop]:");
          scanf("%d", &num);

          if(num == 0)
            break;

          if(num < 0)
            continue;

          total += num;
          count ++;
      }

      printf("Average = %d", total / count);
}
