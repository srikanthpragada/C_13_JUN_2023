//Take salary and grade and display net salary
//Date : 27-JUN-2023

#include <stdio.h>

void main()
{
 int salary, grade, hra, da, net_salary;

    printf("Enter salary and grade: ");
    scanf("%d%d",&salary,&grade);

    if (grade == 1)
    {
       hra = salary * 40 / 100;
       da = salary * 25 / 100;
    }
    else
    {
      hra = salary * 30 / 100;
      da = salary * 20 / 100;
    }

    net_salary = salary + hra + da;

    printf("Salary      : %6d\n", salary);
    printf("HRA         : %6d\n", hra);
    printf("DA          : %6d\n", da);
    printf("Net Salary  : %6d\n", net_salary);

}
