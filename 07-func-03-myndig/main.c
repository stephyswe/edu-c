#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool isAdult(int age){
    return age > 18;
}

void main(){
    int age;
    printf("Ange age: ");
    scanf("%d", &age);
    bool adult = isAdult(age);
    return adult;
}