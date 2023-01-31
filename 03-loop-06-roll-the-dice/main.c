#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main(){
    // roll two dices and print the result of the sum
    int dice1 = 0;
    int dice2 = 0;
    int sum = 0;

    char answer = 'y';
    bool keepWhile = true;

    while(keepWhile) {
        printf("Rolling the dice.. \n");
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        printf("Dice 1: %d \n", dice1);
        printf("Dice 2: %d \n", dice2);
        printf("Total value: %d \n", sum);


        printf("Roll the dice? (y/n) \n");
        scanf("%c", &answer);
        if(answer == 'y') {
            keepWhile = true;
        } else if(answer == 'n') {
            keepWhile = false;
        } else {
            printf("Please enter y or n \n");
        }
    }
}