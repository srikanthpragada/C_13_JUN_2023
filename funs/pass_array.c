//Print chars between two given chars
//Date : 11-JUL-2023

#include <stdio.h>

void print_chars(char fromchar, char tochar)
{
 char ch;

    for(ch = fromchar; ch <= tochar ; ch ++)
    {
        putch(ch);
    }
}

void main()
{
   print_chars('A' , 'K');
}
