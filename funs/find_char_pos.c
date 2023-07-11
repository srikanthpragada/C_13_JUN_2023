//Function to return position of a char
//Date : 11-JUL-2023

#include <stdio.h>

int find_pos(char st[30], char ch)
{
 int i;

    for(i = 0;  st[i] != '\0'; i ++)
    {
        if (st[i] == ch)
            return i;
    }

    return -1; // char not found
}

void main()
{

   printf("%d", find_pos("Programming", 's'));

}
