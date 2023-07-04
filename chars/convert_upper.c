//Display all chars in uppercase
//Date : 4-JUL-2023

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter chars :");
     while(1)
     {
        ch = getch();
        if(ch == '*')
            break;

        putch(toupper(ch));
     }
}
