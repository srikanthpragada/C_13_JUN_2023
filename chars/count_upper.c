//print count upper
//Date : 1-JUL-2023

#include <stdio.h>

void main()
{
  char ch;
  int i, count = 0;

     printf("Enter chars :");
     for(i =1; i <= 10; i ++)
     {
        ch = getche();
        if(ch >= 65 && ch <= 90)
             count ++;
     }
     printf("\nUpper Count = %d", count);

}
