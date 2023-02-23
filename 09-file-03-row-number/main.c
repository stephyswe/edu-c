#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int rowNumber()
{
    FILE *input_file = fopen("input_file.txt", "r");
    FILE *output_file = fopen("output_file.txt", "w");

    int line_number = 1;
    char line[256];
    while (fgets(line, sizeof(line), input_file))
    {
        fprintf(output_file, "%d %s", line_number, line);
        line_number++;
    }

    fclose(input_file);
    fclose(output_file);
}

void main()
{
    rowNumber();
}
