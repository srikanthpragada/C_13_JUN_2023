//Print digits of a number in reverse
//Date : 29-JUN-2023

#include <stdio.h>

void main()
{
 int num, digit, largest = 0;

      printf("Enter number :");
      scanf("%d", &num);

      while(num > 0)
      {
          digit = num % 10;
          if(digit > largest)
              largest = digit;
          num = num / 10;  // remove rightmost digit
      }

      printf("Largest digit = %d", largest);
}
