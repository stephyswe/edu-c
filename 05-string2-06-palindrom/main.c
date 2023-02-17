#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void palindrom(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    char cleanedText[100];
    char cleanedTextBackwards[100];


    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            continue;
        cleanedText[count] = tolower(text[i]);
        count++;
    }
    cleanedText[count] = 0;
    
    count = 0;
    for(int i = strlen(cleanedText)-1; i>=0 ;i--){
        cleanedTextBackwards[count] = cleanedText[i];
        count++;
    }
    cleanedTextBackwards[count] = 0;

    if(!strcmp(cleanedText,cleanedTextBackwards)){
        printf("palindrom");
    }
    else{
        printf("ej palindrom");
     }

}

void palindromSmarter(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    char cleanedText[100];
    
    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            continue;
        cleanedText[count] = tolower(text[i]);
        count++;
    }
    bool palindrom = true;
    for(int i = 0; i < strlen(cleanedText)/2+1;i++){
        if(cleanedText[i] != cleanedText[strlen(cleanedText)-1-i]){
            palindrom = false;
        }
    }
    if(palindrom)
        printf("palindrom");
    else
        printf("ej palindrom");

}


void main(){
    palindrom();
    palindromSmarter();
}