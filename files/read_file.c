//read a file
//Date : 18-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  char filename[50];
  int i, ch;

        printf("Enter filename :");
        gets(filename);

        fp = fopen(filename, "rt");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            return;
        }

        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)  // end of file
                break;

            putch(ch);
        }

        fclose(fp);

}


