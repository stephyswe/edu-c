#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void findFirst(){
    char text[100];
    char letterInput[2];

    GetInput("Ange en text:",text, sizeof(text));
    GetInput("Ange en bokstav:",letterInput, sizeof(letterInput));
    char letter = letterInput[0];

    char *find = strchr(text,letter);
    if(find == NULL)
        printf("Det finns inget %c i texten du matade in",letter);
    else
        printf("Det första stället jag hittade %c på var position %d\n",letter, find-text);

}


void main(){
    findFirst();
}