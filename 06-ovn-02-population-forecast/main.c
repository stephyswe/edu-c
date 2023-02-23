#include <stdio.h>
#include "safeinput.h"

int populationForecast()
{
    int year, population;
    const int START_POPULATION = 26000;
    const double BIRTH_RATE = 0.007; // 182
    const double DEATH_RATE = 0.006; // 156 <> 182-156. = 26
    const int IMMIGRATION = 300;     // 300
    const int EMIGRATION = 325;      // 325 <> 300 - 325 = ... -25
    /// answer is 26 - 25 = 1

    // Get input from user
    GetInputInt("Enter a year (after 2022): ", &year);

    // Calculate population for the given year
    population = START_POPULATION;
    for (int y = 2022; y < year; y++)
    {
        int births = (int)(population * BIRTH_RATE);
        int deaths = (int)(population * DEATH_RATE);
        population += births - deaths + IMMIGRATION - EMIGRATION;
    }

    // Output the estimated population for the given year
    printf("The estimated population for %d is %d.\n", year, population);
}

void main()
{
    populationForecast();
}