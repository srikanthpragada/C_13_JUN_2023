//Write marks of 20 students into marks.dat
//Date : 24-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  int i, num;

        fp = fopen("marks.dat", "wb");

        srand(time(0));
        for(i = 1; i <= 20; i ++)
        {
             num = rand() % 100;
             fwrite(&num, sizeof(num),1, fp);
        }

        fclose(fp);
}


