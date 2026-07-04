/* Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is Rs. 5500/-. Now the dearness
allowance is 74% of his basic salary and house rent allowance is 15% of basic salary. Write
a program to calculate his gross salary. [Though his basic salary is given, do this program
where basic is taken through keyboard]*/

#include <stdio.h>

int main() {
    double basic, da, hra, gross_salary;
    printf("Enter the Basic Salary of the employee: Rs. ");
    scanf("%lf", &basic);

    // Dearness Allowance (DA) -> 74% of Basic
    da = (74.0 / 100.0) * basic;
    // House Rent Allowance (HRA) -> 15% of Basic
    hra = (15.0 / 100.0) * basic;
    // Gross Salary - Basic + DA + HRA
    gross_salary = basic + da + hra;

    // the breakdown and the final gross salary
    printf("\n--- Salary Breakdown Structure ---\n");
    printf("Basic Salary    : Rs. %.2lf\n", basic);
    printf("DA (74%%)        : Rs. %.2lf\n", da);
    printf("HRA (15%%)       : Rs. %.2lf\n", hra);
    printf("----------------------------------\n");
    printf("Gross Salary    : Rs. %.2lf\n", gross_salary);

    return 0;
}