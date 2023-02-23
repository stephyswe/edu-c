#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

/**
 *
 * This version of the function has a few changes that make it more concise and efficient:
The loop condition *p checks for the end of the string, rather than calling strlen on every iteration. This can be faster, especially for long strings.
The loop variable p is a pointer to the current character, rather than an index into the string. This can be more efficient and easier to read.
The if-else statement is replaced with a single line that updates the beforeWasSpace flag based on the current character. This can simplify the code and eliminate a branch.
The function parameter txt is not checked for null, so make sure to pass a valid pointer to a null-terminated string to avoid undefined behavior.
*/

void titleCase(char *txt)
{
    bool beforeWasSpace = true;

    for (char *p = txt; *p; p++)
    {
        if (beforeWasSpace && isalpha(*p))
            *p = toupper(*p);
        beforeWasSpace = (*p == ' ');
    }
}

void titleCaseOld(char *txt)
{
    bool beforeWasSpace = true;

    for (int i = 0; i < strlen(txt); i++)
    {
        if (beforeWasSpace)
            txt[i] = toupper(txt[i]);
        if (txt[i] == ' ')
            beforeWasSpace = true;
        else
            beforeWasSpace = false;
    }
}

main()
{
    // Modify a string: title case
    char s[100] = "stefan holmberg heter jag";
    titleCase(s);
    printf("%s\n", s);
}