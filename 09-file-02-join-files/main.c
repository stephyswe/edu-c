#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void joinFiles()
{
    FILE *fResult = fopen("resultat.txt", "w");
    FILE *f1 = fopen("namn.txt", "r");
    FILE *f2 = fopen("namn2.txt", "r");
    if (f1 == NULL || f2 == NULL || fResult == NULL)
    {
        printf("FEL!!! - Filen kunde inte öppnas");
        fclose(f1);
        fclose(f2);
        fclose(fResult);
        return;
    }

    char line[250];
    while (fgets(line, 250, f1))
    {
        fputs(line, fResult);
    }
    fclose(f1);

    while (fgets(line, 250, f2))
    {
        fputs(line, fResult);
    }
    fclose(f2);

    fclose(fResult);
}

void main()
{
    joinFiles();
}
