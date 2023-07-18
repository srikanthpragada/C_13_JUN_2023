//read names from file - names.txt
//Date : 18-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  int i, ch;

        fp = fopen("names.txt", "rt");
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


