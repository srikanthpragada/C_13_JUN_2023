//Find marks for a given student from marks.dat
//Date : 24-JUL-2023

#include <stdio.h>


int main()
{
  FILE * fp;
  int i, rollno, pos, count, num;

        fp = fopen("marks.dat", "r+b");
        printf("Enter Rollno :");
        scanf("%d", &rollno);

        // move file pointer to the given location from beginning of the file
        pos = (rollno - 1) * 4;
        fseek(fp, pos, SEEK_SET);

        count = fread(&num, sizeof(num), 1, fp);
        if(count == 0) // EOF
            printf("Sorry! Rollno not found!");
        else
            printf("Marks : %d",num);

        fclose(fp);
}


