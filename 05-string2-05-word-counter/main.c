#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void wordCounter(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));
    
    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            count++;
    }
    int words = count+1;

    printf("Jag hittade %d ord\n", words);

}


void main(){
    wordCounter();
}