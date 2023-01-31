#include <stdio.h>
#include <stdbool.h>

void main(){
    // count numbers lower then input
    int input;
    printf("Ange ett tal:");
    scanf(" %d", &input);

    // check numbers lower then input with for loop
    printf("Tal with for loop:");
    for(int i = 1; i < input; i++){
        printf("%d ", i);
    }

    printf("\n");

    // check numbers lower then input with while loop
    printf("Tal with while loop:");
    int i = 1;
    while(i < input){
        printf("%d ", i);
        i++;
    }
}