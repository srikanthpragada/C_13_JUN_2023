//Take marks and display result
//Date : 24-JUN-2023

#include <stdio.h>

void main()
{
int marks;

    printf("Enter marks: ");
    scanf("%d",&marks);

    if (marks >= 50)
        printf("Passed!");
    else
        printf("Faield");
}
