#include <stdio.h>
#include <stdlib.h>
#include "safeinput.h"

void calculator()
{
    double num1, num2, result;
    char operator;

    // Get input from user
    GetInputDouble("Tal: ", &num1);
    GetInputChar("Operator (+, -, *, /): ", &operator);
    GetInputDouble("Tal: ", &num2);

    // Calculate the result based on the operator
    if (operator== '+')
    {
        result = num1 + num2;
    }
    else if (operator== '-')
    {
        result = num1 - num2;
    }
    else if (operator== '*')
    {
        result = num1 * num2;
    }
    else if (operator== '/')
    {
        if (num2 == 0)
        {
            printf("Error: division by zero\n");
            exit(1);
        }
        result = num1 / num2;
    }
    else
    {
        printf("Error: invalid operator\n");
        exit(1);
    }

    // Output the result
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
}

void main()
{
    calculator();
}