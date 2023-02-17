#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void validate(){
    char text[100];
    char letterInput[2];

    GetInput("Ange en emailaddress:",text, sizeof(text));

    bool containsAt = strchr(text, '@');
    bool containsDot = false;
    bool okAfter = false;
    char *lastDot = strrchr(text, '.');
    if(lastDot){
        containsDot = true;
        int pos = lastDot - text;
        int after = strlen(text) - pos - 1;
        okAfter = after == 2 || after == 3;
    }
    if(containsAt && containsDot && okAfter){
        printf("Ok epost");
    }else{
        printf("Invalid epost");
    }
}


void main(){
    validate();
}