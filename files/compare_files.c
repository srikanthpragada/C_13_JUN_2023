//Compare two files and display where they differ
//Date : 20-JUL-2023

#include <stdio.h>


int main()
{
  FILE * ffp, * sfp;
  char ff[50], sf[50];
  int fch, sch, row=1, col=1;

        printf("Enter source filename :");
        gets(ff);

        printf("Enter target filename :");
        gets(sf);

        ffp = fopen(ff, "rt");
        if(ffp == NULL)  // open failed
        {
            printf("Sorry! Could not open first file!");
            return;
        }

        sfp = fopen(sf, "rt");
        if(sfp == NULL)  // open failed
        {
            printf("Sorry! Could not open second file!");
            return;
        }

        while(1)
        {
            fch = fgetc(ffp);
            sch = fgetc(sfp);

            if(fch != sch)
            {
                printf("Sorry! Files differ at %d, %d", row,col);
                break;
            }

            if(fch == EOF && sch == EOF)  // end of file
            {
                printf("Files are same!");
                break;
            }

            if(fch == '\n') // end of line
            {
                row ++;
                col = 1;
            }
            else
                col ++;
        } // while

        fclose(ffp);
        fclose(sfp);
}


