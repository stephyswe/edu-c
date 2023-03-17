#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Filer - 
// Kort repetition från video, text + binary
// TEXT-filer
//      sökvägar
//      vi skapar en textfil i Notepad och läser in + skriver ut alla rader som innehåller
//                      ett fult ord

// BINÄR-filer - finns på video

// Ni labbar PS Fåglarna - sortera? 
//              GOOGLE

bool hasBadWord(const char *text){
    char badWords[3][20] = {
        "vegetables","homework","tea"
    };

    // gå igenom alla fula ord
    for(int i = 0; i < 3; i++){
        if(strstr(text,badWords[i]))
            return true;

/*
    Sparar vi på bytes om vi gör kodningen mer kompakta?
*/            
        
        // char *result = strstr(text,badWords[i]);
        // if(result) // VI HAR HITTAT 
        //     return true;

    //     char *currentWord = badWords[i];
    //     char *result = strstr(text,currentWord);
    //     if(result != NULL) // VI HAR HITTAT 
    //         return true;
    }
    // om det fula ordet finns i text så return TRUE
    
    return false;
}


void fileDemo2(){
    FILE* filePointer;
    int bufferLength = 255;
    char buffer[bufferLength]; 
    // relative sökväg
    // current folder  + "program.txt" -> 
    // .   currewnt foler
    //filePointer = fopen(".\\indata\\aaa.txt", "r");
    filePointer = fopen(".\\indata\\inlamning.txt", "r");
    if(filePointer == NULL){
        printf("Fel\n");
        return;
    }

    while(fgets(buffer, bufferLength, filePointer)) {
        buffer[strcspn(buffer, "\r\n")] = 0;
        if(hasBadWord(buffer))
            printf("%s\n", buffer);
    }

    fclose(filePointer);
    
}

int main(){
    fileDemo2();
    return 0;
}