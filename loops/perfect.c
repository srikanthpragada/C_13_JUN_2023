//Print whether number is perfect
//Date : 30-JUN-2023

#include <stdio.h>

void main()
{
 int num, i, total = 1;

      printf("Enter number :");
      scanf("%d", &num);

      for(i = 2; i <= num / 2  ; i ++)
      {
          if (num % i == 0)
              total += i;
      }

      if(num == total)
        printf("Perfect");
      else
        printf("Not perfect");
}
