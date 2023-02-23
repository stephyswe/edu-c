#include <stdio.h>
#include <stdlib.h>
#include "safeinput.h"

void countBetween100And200()
{
    int count, num, betweenCount = 0;

    GetInputInt("Ange antalet tal att mata in: ", &count);

    for (int i = 1; i <= count; i++)
    {
        printf("Ange tal #%d: ", i);
        scanf("%d", &num);
        if (num >= 100 && num <= 200)
            betweenCount++;
    }

    printf("%d av de %d talen var mellan 100 och 200.\n", betweenCount, count);
}

void main()
{
    countBetween100And200();
}