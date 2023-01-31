#include <stdio.h>
#include <stdbool.h>

void main(){
    // count numbers beween two input numbers
    int start, end;
    printf("Ange start:");
    scanf(" %d", &start);

    printf("Ange end:");
    scanf(" %d", &end);

    // check numbers between with for loop
    for(int i = start + 1; i <= end - 1; i++){
        printf("%d ", i);
    }

    printf("\n");

    // check numbers between with while loop
    int i = start + 1;
    while(i <= end - 1){
        printf("%d ", i);
        i++;
    }
}