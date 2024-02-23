#include <stdio.h>

int main()
{
    int basicSalary,grossSalary;
    printf("Enter Basic Salary\n");
    scanf("%d", &basicSalary);

    if(basicSalary <= 10000)
    {
        grossSalary = basicSalary + basicSalary * 20 / 100 + basicSalary * 80 / 100;
        
    } else if (basicSalary <= 20000)
    {
        grossSalary = basicSalary + basicSalary * 25 / 100 + basicSalary * 90 / 100;
        
    } else { 
        grossSalary = basicSalary + basicSalary * 30 / 100 + basicSalary *  95 / 100;
    }

    printf("Gross salary : %d\n",grossSalary);
}