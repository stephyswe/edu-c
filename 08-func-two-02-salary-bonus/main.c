#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

bool addBonus(int *salary, int age)
{
    if (age > 50 && *salary > 30000)
    {
        *salary *= 1.1;
        return true;
    }
    return false;
}

main()
{
    // Salary bonus
    int salary = 39000;
    bool b = addBonus(&salary, 52);
}