#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //STRING ADDER
    char text1[20];
    char text2[20];
    char text3[20];

    char textTotal[62];
    printf("Enter text 1:");
    scanf(" %s", text1);
    printf("Enter text 2:");
    scanf(" %s", text2);
    printf("Enter text 3:");
    scanf(" %s", text3);

    strcpy(textTotal,text1 );
    strcat(textTotal," " );
    strcat(textTotal,text2 );
    strcat(textTotal," " );
    strcat(textTotal,text3 );

    printf("Result: %s and it's %d chars\n", textTotal, strlen(textTotal) );
}