#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

float calculateTaxesOnSalary(float salary)
{
    if (salary >= 30000)
        return salary * 0.33;
    if (salary < 15000)
        return salary * 0.12;
    return salary * 0.28;
}

void main()
{
    // Salary
    float salary;
    printf("Monthly salary:");
    scanf(" %f", &salary);
    printf("Taxes are: %.2f\n", calculateTaxesOnSalary(salary));
}