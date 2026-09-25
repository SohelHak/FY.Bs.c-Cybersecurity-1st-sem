/* 
The basic salary of an employee is decided at the time of employment, which may be
different for different employees. Apart from basic, employee gets 10% of basic as
houserent, 30% of basic as dearness allowance. A professional tax of 5% of basic is
deducted from salary. Accept the employee id and basic salary for an employee and output
the take home salary of the employee.
*/ 

#include <stdio.h>

int main(){
    int emp_id;
    float basic, hra, da, tax, take_home;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    da = 0.30 * basic;
    tax = 0.05 * basic;
         
    take_home = basic + hra + da - tax;

    printf("Employee ID: %d\n", emp_id);
    printf("Take Home Salary: %.2f\n", take_home);

    return 0;
}
