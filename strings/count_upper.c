//Take a string and count uppercase letters
//Date : 08-JUL-2023

#include <stdio.h>

void main()
{
   char st[50];
   int i, count = 0;

       printf("Enter string: ");
       gets(st);

       for(i = 0; st[i] != '\0' ; i ++)
       {
           if (isupper(st[i]))
                count ++;
       }

       printf("Count = %d", count);
}
