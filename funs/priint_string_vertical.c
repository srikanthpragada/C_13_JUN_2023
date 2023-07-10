//Print string vertically using a function
//Date : 10-JUL-2023

#include <stdio.h>

void print_vertical(char st[20])
{
 int i;

    for(i = 0; st[i] != '\0'; i ++)
    {
        printf("%c\n", st[i]);
    }
}

void main()
{
  char name[20] = "Programming";

      print_vertical(name);
}
