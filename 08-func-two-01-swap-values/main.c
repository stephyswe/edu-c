#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

// COPY BY VALUE
void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void main()
{
    // Swap values
    int tal1 = 99;
    int tal2 = 100;
    Swap(&tal1, &tal2);
}