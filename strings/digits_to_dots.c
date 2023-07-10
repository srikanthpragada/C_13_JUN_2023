//Take a string and replace digits with dots
//Date : 10-JUL-2023

#include <stdio.h>

void main()
{
   char st[20];
   int i;

       printf("Enter string : ");
       gets(st);

       for(i = 0; st[i] != '\0' ; i ++)
       {
           if(isdigit(st[i]))
               st[i] = '.';
       }

       puts(st);
}
