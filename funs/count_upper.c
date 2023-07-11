//Function to return no. of uppercase letters in the given string
//Date : 11-JUL-2023

#include <stdio.h>

int count_upper(char st[30])
{
 int i, count = 0;

    for(i = 0;  st[i] != '\0'; i ++)
    {
        if(isupper(st[i]))
              count ++;
    }

    return count;
}

void main()
{

   printf("%d", count_upper("This IS to test"));

}
