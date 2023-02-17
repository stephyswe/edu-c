#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //String och int
    char *name = "Stefan"; // literal = text-segmentet
    int age = 50;

    printf("My name is %s and I am %d years\n",name,age );
    
    char name2[] = "Stefan"; // Skillnad = stackallokerad = read+write
    printf("My name is %s and I am %d years\n",name,age );
}