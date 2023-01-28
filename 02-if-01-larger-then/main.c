#include <stdio.h>

void main(){

    // check if number is larger then 10
    int number;
    printf("Ange ett tal:");
    scanf(" %d", &number);

    if(number > 10){
        printf("Talet är större än 10\n");
    }else{
        printf("Talet är mindre än 10\n");
    }
}