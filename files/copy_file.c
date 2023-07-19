//Copy source file to target file
//Date : 19-JUL-2023

#include <stdio.h>


int main()
{
  FILE * sfp, * tfp;
  char sf[50], tf[50];
  int ch;

        printf("Enter source filename :");
        gets(sf);

        printf("Enter target filename :");
        gets(tf);

        sfp = fopen(sf, "rt");
        if(sfp == NULL)  // open failed
        {
            printf("Sorry! Could not open source file!");
            return;
        }

        tfp = fopen(tf, "wt");
        if(tfp == NULL)  // open failed
        {
            printf("Sorry! Could not open target file!");
            return;
        }

        while(1)
        {
            ch = fgetc(sfp);
            if(ch == EOF)  // end of file
                break;

            fputc(ch,tfp);
        }

        fclose(sfp);
        fclose(tfp);
}


