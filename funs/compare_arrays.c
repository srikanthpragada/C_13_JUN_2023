//Compare arrays
//Date : 12-JUL-2023

#include <stdio.h>

int equal(int [], int []);

void main()
{
  int a1[] = {1,2,3,4,5};
  int a2[] = {1,20,3,4,5};

     printf("%d ", equal(a1,a2));
}

int equal(int a[5], int b[5])
{
  int i;

     for(i = 0; i < 5; i ++)
     {
        if (a[i] != b[i])
            return 0;
     }

     return 1;
}

