//Print digits of a number in reverse
//Date : 29-JUN-2023

#include <stdio.h>

void main()
{
 int num;

      printf("Enter number :");
      scanf("%d", &num);

      while(num > 0)
      {
          printf("%d", num % 10);  // rightmost digit
          num = num / 10;  // remove rightmost digit
      }
}
