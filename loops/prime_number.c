//Print whether number is prime or not
//Date : 1-Jul-2023

#include <stdio.h>

void main()
{
 int num, i, prime = 1;

      printf("Enter number :");
      scanf("%d", &num);

      for(i = 2; i <= num/2  ; i ++)
      {
          if (num % i == 0)
          {
             prime = 0; // found factors so number is not prime
             break;
          }
      }

      if(prime)
         printf("Prime Number");
      else
         printf("Not a prime number");


}
