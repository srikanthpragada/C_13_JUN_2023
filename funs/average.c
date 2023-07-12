//Function to calculate average
//Date : 12-JUL-2023

#include <stdio.h>

float average(int,int);   // function declaration or prototype declaration

void main()
{
 float avg;

    avg = average(10, 15);
    printf("%f", avg);
}

// function definition
float average(int a, int b)
{
   return (a + b) / 2.0;
}

