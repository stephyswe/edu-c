#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

bool isConsonant(char ch) { return isalpha(ch) && !isVowel(ch); }

// input this is fun
// i non
void translate(char *input, char *output)
{
    // strcpy(output, "");
    output[0] = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        char ch = input[i];
        if (isConsonant(ch))
        {
            int lastIndex = strlen(output);
            output[lastIndex] = ch;
            output[lastIndex + 1] = 'o';
            output[lastIndex + 2] = ch;
            output[lastIndex + 3] = 0;
        }
        else
        {
            int lastIndex = strlen(output);
            output[lastIndex] = ch;
            output[lastIndex + 1] = 0;
        }
    }
}

void main()
{
    // Translate Rövarspråket
    char texten[100] = "This is fun";
    char outtexten[300] = "";
    translate(texten, outtexten);
    printf("%s\n", outtexten);
}