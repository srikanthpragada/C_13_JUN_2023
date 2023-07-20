//Print given file with line numbers
//Date : 20-JUL-2023

#include <stdio.h>

int main()
{
  FILE * fp;
  char name[20], line[100], *p;
  int lineno = 1;

        printf("Enter filename :");
        gets(name);

        fp = fopen(name, "rt");

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


