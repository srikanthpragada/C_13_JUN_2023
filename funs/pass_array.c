//Write message with lines
//Date : 10-JUL-2023

#include <stdio.h>

void print_array(int a[10])
{
 int i;

    for(i = 0; i < 10; i ++)
    {
        printf("%d\n", a[i]);
    }
}

void main()
{
  int arr[10];

      print_array(arr);
}
