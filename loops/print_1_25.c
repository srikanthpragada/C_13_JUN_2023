//Print 1 to 25 as 5 X 5 Matrix
//Date : 01-JUL-2023

#include <stdio.h>

void main()
{
 int i, j, n = 1;

      for(i = 1;  i <= 5; i ++)
      {
          for(j = 1; j <= 5; j ++)
          {
             printf("%3d", n);
             n ++;
          }
          printf("\n");
      }
}
