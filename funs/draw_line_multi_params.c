//Write message with lines
//Date : 10-JUL-2023

#include <stdio.h>

// user-defined function
void draw_line(int len, char ch)
{
 int i;

    for(i = 1; i <= len ; i ++)
    {
       putch(ch);
    }
}

void main()
{
   int i;

       draw_line(25,'-'); // call a function
       printf("\nSrikanth Technologies\n");
       draw_line(30, '*');

}
