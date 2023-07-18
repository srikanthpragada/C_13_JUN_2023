//Write names into file - names.txt
//Date : 18-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  char name[20];
  int i;

        fp = fopen("names.txt", "wt");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            return 1; // terminated due to error
        }

        for(i = 1; i <= 5; i ++)
        {
            printf("Enter name :");
            gets(name);

            fprintf(fp, "%s\n", name);
        }

        fclose(fp);

        return 0; // success
}


