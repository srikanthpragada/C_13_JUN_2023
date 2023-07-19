//Count alpha, digits and others
//Date : 19-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  char filename[50];
  int ch, alpha = 0, digits = 0, others = 0;

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

            if(isalpha(ch))
                  alpha ++;
            else
                if(isdigit(ch))
                    digits ++;
                else
                    others ++;
        }

        fclose(fp);
        printf("Alpha = %d, Digits = %d, Others = %d",
                    alpha, digits, others);

}


