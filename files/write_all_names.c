//Write names until end is given, into file - names.txt
//Date : 18-JUL-2023

#include <stdio.h>

int main()
{
  FILE * fp;
  char name[20];
  int i;

        fp = fopen("names.txt", "at");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            return 1; // terminated due to error
        }

        while(1)
        {
            printf("Enter name :");
            gets(name);
            if (stricmp(name, "end") == 0)
                 break;

            fprintf(fp, "%s\n", name);
        }

        fclose(fp);

        return 0; // success
}


