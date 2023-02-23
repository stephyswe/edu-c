#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

bool isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' ||
        ch == 'o' ||
        ch == 'u' ||
        ch == 'å' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'y' ||
        ch == 'ä' ||
        ch == 'ö')
        return true;
    return false;
}

int countVowels(char *s)
{
    int counter = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        char ch = s[i];
        if (isVowel(ch))
            counter++;
    }
    return counter;
}

int countCharacters(char *s)
{
    int counter = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // 
        char ch = s[i];

        // what is the difference between isalpha and isalnum?
        // isalnum also counts numbers
        // isalpha only counts letters
        if (isalnum(ch))
            counter++;
    }
    return counter;
}

void main()
{
    // Vokaler
    char ch = 'A';
    bool b = isVowel(ch);
    printf("%c\n", ch); //'a'

    char txt[100];
    scanf(" %s", txt);
    int vowelCount = countVowels(txt);

    printf("Your text is %d characters and contains %d vowels",
           countCharacters(txt),
           vowelCount);
}