#include <stdio.h>
#include <stdbool.h>

void main(){


    // add two numbers with input and print result while 0 is not entered
    bool keepWhile = true;
    while (keepWhile) {
        int a, b;
        printf("Ange tal 1:");
        scanf(" %d", &a);

        printf("Ange tal 2:");
        scanf(" %d", &b);

        printf("Summan av %d och %d är %d \n", a, b, a + b);

        printf("Vill du fortsätta(1 = Ja, 0 = Nej)? ");
        scanf(" %d", &keepWhile);
    }
}