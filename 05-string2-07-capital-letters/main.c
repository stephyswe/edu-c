#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void capitalLetters(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));
    
    bool beforeWasSpace = false;
    for(int i = 0; i < strlen(text);i++){
        if( i == 0 ||  beforeWasSpace){
            text[i] = toupper(text[i]);
        }
        beforeWasSpace = text[i] == ' ';

    }
    printf("%s\n",text);

}


void main(){
    capitalLetters();
}