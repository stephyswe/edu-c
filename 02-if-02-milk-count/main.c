#include <stdio.h>

void main(){

    // check if number is larger then 10
    int number;
    printf("Ange antal mjölk paket:");
    scanf(" %d", &number);

    if(number < 10){
        printf("Beställ 30 paket.");
    } else if (number > 10 && number < 20)
        printf("Beställ 20 paket.");    
    else{
        printf("Du behöver inte beställa någon mjölk.");
    }
}