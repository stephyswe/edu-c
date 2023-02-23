#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>
#include "safeinput.h"

void largeAndSmall()
{
    int num, largest = INT_MIN, smallest = INT_MAX;

    // Initialize largest and smallest with the first number entered
    // Keep reading numbers until 0 is entered
    while (1)
    {
        GetInputInt("Ange ett positivt nummer, 0 att avsluta:", &num);

        if (num == 0)
            break;

        if (num > 0)
        {
            if (num > largest)
                largest = num;

            if (num < smallest)
                smallest = num;
        }
        else
            puts("Negativa tal är inte tillåtna.\n");
    }

    // Print the largest and smallest number
    printf("The största talet var %d.\n", largest);
    printf("The minsta talet var %d.\n", smallest);
}

void main()
{
    largeAndSmall();
}