//Show given file on command line with line numbers
//Date : 24-JUL-2023

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE * fp;
  char name[20], line[100], *p;
  int lineno = 1;

        fp = fopen(argv[1], "rt");
        while(1)
        {
           p = fgets(line,100,fp);  // read a line
           if(p == NULL) // EOF
               break;
           printf("%3d: %s", lineno, line);
           lineno ++;
        }

        fclose(fp);
}


