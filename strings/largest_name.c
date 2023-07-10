//Take names and displays largest name
//Date : 10-JUL-2023

#include <stdio.h>
#include <string.h>

void main()
{
    char name[20], largest_name[20] = "";


      //strcpy(largest_name, "");
      while(1)
      {
        printf("Enter name [end to stop] :");
        gets(name);

        if (stricmp(name, "end") == 0)
             break;

        if (strcmp(name, largest_name) > 0)
             strcpy(largest_name, name);
      }

      printf("Largest name : %s", largest_name);

}
