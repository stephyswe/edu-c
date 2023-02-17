#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


/* 
Du har en sträng med texten ”Detta är en sträng som du skall ändra”. 
Ersätt via kod alla blanktecken i strängen med tecknet * .
Räkna sedan ut via kod hur många förekomster det finns av tecknet * i strängen.
*/
void replaceChar(){
    char text[] = "Detta är en sträng som du skall ändra";

    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            text[i] = '*';
    }
    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == '*')
            count++;
    }
    

    printf("Jag hittade %c %d gånger\n",'*', count);
}


void main(){
    replaceChar();
}