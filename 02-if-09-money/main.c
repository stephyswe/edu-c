#include <stdio.h>
#include <stdbool.h>

void main(){
    int money;
    printf("Ange belopp:");
    scanf(" %d", &money);


        // 1800 / 500  -> 3
    
    int fiveHundreds = money / 500; 
    money = money % 500; //remainder operator - rest - hur mycket till måste jag betala

    int twoHundreds = money / 200; 
    money = money % 200;

    int hundreds = money / 100; 
    money = money % 100;

    int fiftees = money / 50; 
    money = money % 50;

    int twenties = money / 20; 
    money = money % 20;

    int tens = money / 10; 
    money = money % 10;

    int kronor = money; 

    printf("500:%d\n", fiveHundreds);
    printf("200:%d\n", twoHundreds);
    printf("100:%d\n", hundreds);
    printf("50:%d\n", fiftees);
    printf("20:%d\n", twenties);
    printf("10:%d\n", tens);
    printf("1:%d\n", kronor);

}