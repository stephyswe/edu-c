#include <stdio.h>
#include <stdbool.h>

void main(){
    //count to ten using while loop
    printf("Counting to ten using while loop\n");
    int i = 1;
    while(i <= 10){
        printf("%d ", i);
        i++;
    }

    printf("\n");

    //count to ten using for loop
    printf("Counting to ten using for loop\n");
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
}