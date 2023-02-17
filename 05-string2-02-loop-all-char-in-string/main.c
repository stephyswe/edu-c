#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void loopAll(){
    char text[100];
    char letterInput[2];

    GetInput("Ange en text:",text, sizeof(text));
    GetInput("Ange en bokstav:",letterInput, sizeof(letterInput));
    char letter = letterInput[0];

    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == letter)
            count++;
    }
    if(count == 0)
        printf("Det finns inget %c i texten du matade in",letter);
    else
        printf("Jag hittade %c %d gånger\n",letter, count);

}


void main(){
    loopAll();
}