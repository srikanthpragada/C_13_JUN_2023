//Print prime numbers from 1 to 50
//Date : 1-Jul-2023

#include <stdio.h>

void main()
{
 int num, i, prime;

    for(num = 1; num < 100; num += 2)
    {
      prime = 1;
      for(i = 2; i <= num/2  ; i ++)
      {
          if (num % i == 0)
          {
             prime = 0; // found factors so number is not prime
             break;
          }
      } // inner loop

      if(prime)
         printf("%d ", num);
    } // outer loop


}
