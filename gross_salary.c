/*
Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of
basic salary, and house rent allowance is 20% of basic salary. Write a program to
calculate his gross salary.
*/

#include <stdio.h>

int main() {
    float basic_salary, da, hr, gross_salary;
    printf("Enter Ramesh's basic salary = ");
    scanf("%f", &basic_salary);
    da = 0.4*basic_salary;
    hr = 0.2*basic_salary;
    gross_salary = basic_salary + da + hr;
    printf("Gross salary = %.2f", gross_salary);

    
    return 0;
}