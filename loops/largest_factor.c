//Print smallest factor
//Date : 1-Jul-2023

#include <stdio.h>

void main()
{
 int num, i, found = 0;

      printf("Enter number :");
      scanf("%d", &num);

      for(i = 2; i <= num/2  ; i ++)
      {
          if (num % i == 0)
          {
             printf("%d ", i);
             found = 1;
             break;
          }
      }

      if(!found)
         printf("%d", num);


}
