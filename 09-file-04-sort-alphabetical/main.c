#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_BIRD_NAME_LENGTH 256
#define MAX_NUM_BIRDS 1000

void sortAlphabeticalBirds()
{
    char bird_names[MAX_NUM_BIRDS][MAX_BIRD_NAME_LENGTH];
    int num_birds = 0;

    // Open input file for reading
    FILE *input_file = fopen("input_file.txt", "r");
    // Open output file for writing
    FILE *output_file = fopen("output_file.txt", "w");

    // Read bird names from file
    char line[MAX_BIRD_NAME_LENGTH];
    while (fgets(line, sizeof(line), input_file))
    {
        // Trim leading and trailing whitespace
        char *start = line;
        while (*start && isspace(*start))
            start++;

        // Skip empty line
        if (*start == '\0')
            continue;

        char *end = start + strlen(start) - 1;
        while (end > start && isspace(*end))
            *end-- = '\0';

        // Copy bird name into array
        strcpy(bird_names[num_birds], start);
        num_birds++;
    }

    // Close input file
    fclose(input_file);

    // Sort bird names in alphabetical order
    qsort(bird_names, num_birds, MAX_BIRD_NAME_LENGTH, strcmp);

    // Write sorted bird names to file
    for (int i = 0; i < num_birds; i++)
        fprintf(output_file, "%s\n", bird_names[i]);

    // Close output file
    fclose(output_file);
}

void main()
{
    sortAlphabeticalBirds();
}
