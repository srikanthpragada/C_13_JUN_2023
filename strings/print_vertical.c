//Take a name from user and print it vertically
//Date : 08-JUL-2023

#include <stdio.h>

void main()
{
   char name[20];
   int i;

       printf("Enter your name: ");
       gets(name);


       for(i = 0; name[i] != '\0' ; i ++)
           printf("%c\n", name[i]);
}
