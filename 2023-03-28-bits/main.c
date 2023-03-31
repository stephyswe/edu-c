#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// header files
#include "ovn1.h"
#include "ovn2.h"

#define _CRT_SECURE_NO_WARNINGS

// INSTRUCTIONS
/*
ÖVNING 1:

void printBits(size_t const size, void const* const ptr)
{
    unsigned char* b = (unsigned char*)ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--)
    {
        for (j = 7; j >= 0; j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    printf("\n");
}


#define BIT_SET(a, b) ((a) |= (1ULL << (b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))        // '!!' to make sure this returns 0 or 1


SKRIV ETT PROGRAM SOM MATAR IN ETT TAL, SKRIVER UT BITTARNA: DESSUTOM SKA DU KUNNA SÄTTA/NOLLA EN SPECIFIK BIT (gör en meny kanske?
*/

void ovn1()
{
    unsigned int talet;
    while (true)
    {
        printf("1. Enter a number\n");
        printf("2. Print the binary representation\n");
        printf("3. Set a bit\n");
        printf("4. Clear a bit\n");
        printf("Action: ");
        int action;
        scanf(" %d", &action);
        if (action == 1)
        {
            printf("Enter a number: ");
            scanf(" %d", &talet);
        }
        if (action == 2)
        {
            printf("Binary representation: ");
            printBits(sizeof(talet), &talet);
        }
        if (action == 3)
        {
            printf("Enter bit number to set: ");
            int bitNo;
            scanf(" %d", &bitNo);
            BIT_SET(talet, bitNo);
        }
        if (action == 4)
        {
            printf("Enter bit number to clear: ");
            int bitNo;
            scanf(" %d", &bitNo);
            BIT_CLEAR(talet, bitNo);
        }
    }
}

/*
Funktionen
void WriteLogMessage(char* message,bool toFile, bool toConsole, bool includeDate,bool includeDayOfWeek,bool includeTime,bool uppercaseMessage);

Innebär 6 ints som kopeieras och stackas vid varje anrop.

GÖR OM SÅ WriteLogMessage(char *message, char flags)
Om Bit 1 är satt så : toFile
Om Bit 2 är satt så : toConsole
Om Bit 3 är satt så : includeDate
etc etc

Fundera om ni kan använda DEFINE:s ?? för att få koden som anropar funktionen ()dvs den i main) läsbar?
*/

void ovn2()
{
    WriteLogMessage("Nu startar programmet",
                    true, true, true,
                    false,
                    true,
                    false);
}

/*
Gör en funktion som tar en 8 tecken lång sträng av 1:or och 0:or och returnerar ett decimaltal.

Ex: char str[] = "00001001" ska ge 9 om funktionen anropas med strängen.
*/

void ovn3()
{
    system("cls");
    printf("Enter a string of binary numbers: ");
    char binaryString[100] = "";
    scanf(" %s", binaryString);

    int sumOfBits = 0;
    for (int stringBit = 0; stringBit < strlen(binaryString); stringBit++)
    {
        sumOfBits = sumOfBits + (binaryString[stringBit] - 48) * pow(2, (strlen(binaryString) - stringBit - 1));
    }

    printf("The Binary String %s Gives A Result Of %d As Decimal Number\n", binaryString, sumOfBits);
}

// main function
int main()
{
    // ovn1();
    ovn2();
    // ovn3();
    return 0;
}
