#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * FACIT: https://github.com/aspcodenet/CStructFacit




*************

2.1a. Lab21ASwapTwoNumbers
    - mata in två tal in i två variabler (ints).
    - anropa en funktion SwapInts som byter värde i de två variablerna
    - skriv ut resultatet

2.1.b. Lab21BSwapTwoNumbers
    - mata in de två talen på en och SAMMA rad med mellanslag emellan
    - ex Mata in värden med mellanslag emellan>12 99
    - parsa ut de två olika värdena – 12 ska in i en variabel och 99 in i den andra
    - OBS variablerna ska ju vara INTs

    - anropa en funktion SwapInts som byter värde i de två variablerna
    - skriv ut resultatet

    2.2.a: Dynamiskt array med INTs
    - mata in N tal på en och SAMMA rad med mellanslag emellan
    - ex Mata in tal med mellanslag emellan>12 99 24 11 34
    - parsa ut ALLA olika värdena
    - skapa en int * (array) med plats för alla – och lägg in värden


    - anropa en funktion printIntArray(const int *array, int size)  som skriver ut alla värden



*/

void printSumOfIntArray(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i]; // add each integer in the array to the sum
    }
    printf("Sum of array: %d\n", sum);
}

void printIntArray(const int *array, int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]); // print each integer in the array
    }
    printf("\n");
}

void SwapInts(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Lab23IsAllCharactersSame()
{
    char str[101]; // assume input string is no longer than 100 characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read input string from user

    for (int i = 1; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] != str[0])
        {
            printf("No\n");
        }
    }

    printf("Yes\n");
}

void Lab22BSum()
{
    int capacity = 10;                                  // initial capacity of the array
    int size = 0;                                       // number of elements in the array
    int *array = (int *)malloc(capacity * sizeof(int)); // allocate memory for the array

    printf("Enter numbers with spaces in between (press Enter to terminate input): ");
    int num;
    while (scanf("%d", &num) == 1)
    { // read integers until end of input
        if (size == capacity)
        { // if the array is full, resize it
            capacity *= 2;
            array = (int *)realloc(array, capacity * sizeof(int));
        }
        array[size++] = num; // add the integer to the array and update the size
    }

    // consume any remaining characters in the input stream
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    printSumOfIntArray(array, size); // call the printIntArray function to print all the integers

    free(array); // free the memory allocated for the array
}

void Lab22ADynamicArrayWithINTs()
{
    int capacity = 10;                                  // initial capacity of the array
    int size = 0;                                       // number of elements in the array
    int *array = (int *)malloc(capacity * sizeof(int)); // allocate memory for the array

    printf("Enter numbers with spaces in between (press Enter to terminate input): ");
    int num;
    while (scanf("%d", &num) == 1)
    { // read integers until end of input
        if (size == capacity)
        { // if the array is full, resize it
            capacity *= 2;
            array = (int *)realloc(array, capacity * sizeof(int));
        }
        array[size++] = num; // add the integer to the array and update the size
    }

    // consume any remaining characters in the input stream
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    printIntArray(array, size); // call the printIntArray function to print all the integers

    free(array); // free the memory allocated for the array
}

void Lab21BSwapTwoNumbers()
{
    int num1, num2;

    printf("Enter values with spaces between: ");
    scanf("%d %d", &num1, &num2);

    SwapInts(&num1, &num2);

    printf("Swapped values: %d %d\n", num1, num2);
}

void Lab21ASwapTwoNumbers()
{
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d\n", a, b);
}

int main()
{
    // Lab21ASwapTwoNumbers();
    // Lab21ABSwapTwoNumbers();
    // Lab22ADynamicArrayWithINTs();
    // Lab22BSum();
    Lab23IsAllCharactersSame();
    return 0;
}