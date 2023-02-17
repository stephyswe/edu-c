#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    srand(time(NULL));
    //INMATNING
    bool runAgain = true;
    while(runAgain){
        int random_number = rand() % 20 + 1;
        printf("Nu blev det %d\n", random_number);

        char cont[10];
        while(1){
            printf("Vill du fortsätta Yes/No?");
            scanf(" %s", cont);
            if(!strcmp(cont,"No")){
                runAgain = false;
                break;                    
            }
            if(!strcmp(cont,"Yes")){
                runAgain = true;
                break;                    
            }
            printf("Yes or No please");
        }
    }
}