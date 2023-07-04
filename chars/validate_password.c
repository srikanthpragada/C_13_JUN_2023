//Test whether password is valid
//Date : 4-JUL-2023

#include <stdio.h>

void main()
{
  char ch;
  int i, upper = 0, digit = 0;

     printf("Enter Password :");
     for(i =1; i <= 8; i ++)
     {
        ch = getche();
        //putch('*');

        if(isdigit(ch))
            digit = 1;
        else
            if(isupper(ch))
              upper = 1;
     }

     if(upper && digit)
         printf("\nValid Password");
     else
         printf("\nInvalid Password");


}
