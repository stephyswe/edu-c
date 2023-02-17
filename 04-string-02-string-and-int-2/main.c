#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //String och int 2
    char name3[50];
    int age3;
    printf("What's your name:");
    scanf(" %s", name3);
    printf("What's your age:");
    scanf(" %d", &age3);
    
    printf("Hi, %s you are %d years\n",name3,age3 );

    if(age3 > 50){
        printf("Wow you're old ;) \n" );
    }
}