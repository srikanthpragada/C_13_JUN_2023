//Write message with lines
//Date : 10-JUL-2023

#include <stdio.h>

// user-defined function
void draw_line()
{
 int i;

    for(i = 1; i <= 30 ; i ++)
    {
       putch('*');
    }
}

void main()
{
   int i;

       draw_line(); // call a function
       printf("\nSrikanth Technologies\n");
       draw_line();

}
