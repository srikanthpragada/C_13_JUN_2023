//Function to fill an array with 0s
//Date : 14-JUL-2023

#include <stdio.h>

void fill_zeros(int a[], int len)
{
 int i;

   for (i = 0; i < len; i ++)
        a[i] = 0;
}
void  print_array(int * a)
{
 int i;

   for (i = 0; i < 10; i ++)
        printf("%5d", a[i]);
}

void main()
{
 int arr[10], b[5];

     fill_zeros(arr, 10);
     fill_zeros(b, 5);
     print_array(arr);
}


