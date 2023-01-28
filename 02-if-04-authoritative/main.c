#include <stdio.h>

void main() {
    // check if number is larger then 10
    int number;
    char* someString = NULL;
    printf("Ange ålder:");
    scanf(" %d", &number);

    if(number < 18){
      someString = "användaren ej myndig";
    } else if (number > 65) {
      someString = "användaren är pensionär";
    } else {
      someString = "användaren är myndig men inte pensionär";
    }

    // print string
    printf("The entered string is: %s\n", someString);
}