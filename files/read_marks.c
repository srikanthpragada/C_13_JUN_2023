//Read marks from marks.dat
//Date : 24-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  int i, count, num;

        fp = fopen("marks.dat", "rb");

        while(1)
        {
           count = fread(&num, sizeof(num), 1, fp);
           if(count == 0) // EOF
            break;

           printf("%d ", num);
        }

        fclose(fp);
}


