//Print table
//Date : 11-JUL-2023

#include <stdio.h>

void print_table(int num, int len)
{
 int i;

    for(i = 1;  i <= len ; i++)
    {
        printf("%3d * %2d = %5d\n", num, i, num * i);
    }
}

void main()
{
   print_table(15, 20);
   // print_table(25);
}
