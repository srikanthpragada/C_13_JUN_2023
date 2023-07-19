//Search for a name in names.txt
//Date : 19-JUL-2023

#include <stdio.h>

int main()
{
  FILE * fp;
  char name[20], line[20], *p;
  int i, found = 0;

        fp = fopen("names.txt", "rt");
        printf("Enter name :");
        gets(name);
        strcat(name,"\n");

        while(1)
        {
           p = fgets(line,20,fp);  // read a line
           if(p == NULL) // EOF
               break;
           // remove \n from line
           //line[strlen(line) - 1] = '\0';


           if(stricmp(name, line) == 0)
           {
               printf("Found");
               found = 1;
               break;
           }
        }

        fclose(fp);

        if(!found)
           printf("Not found!");

}


