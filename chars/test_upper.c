//print whether a char is uppercase
//Date : 1-JUL-2023

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter char :");
     ch = getche();

     if(ch >= 65 && ch <= 90)
        printf("\nUppercase");
     else
        printf("\nNot Uppercase");

}
