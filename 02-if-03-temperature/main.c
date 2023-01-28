#include <stdio.h>

void main(){

    // check if number is larger then 10
    int number;
    printf("Ange temperaturen från febertermometer:");
    scanf(" %d", &number);

    if(number > 39.5){
        printf("Du bör uppsöka läkare.");
    } else if (number > 37.8)
        printf("Du har feber.");    
    else{
        printf("Du har ingen feber.");
    }
}