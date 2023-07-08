//Take names and displays avg length
//Date : 08-JUL-2023

#include <stdio.h>
#include <string.h>

void main()
{
    char name[20];
    int count = 0, total = 0;

      while(1)
      {
        printf("Enter name [end to stop] :");
        gets(name);

        if (stricmp(name, "end") == 0)
             break;

        total += strlen(name);
        count ++;
      }

      printf("Avg. length = %.2f", (float) total / count);

}
