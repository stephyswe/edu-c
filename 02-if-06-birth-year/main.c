#include <stdio.h>

void main(){
    int birthyear;
    printf("Ange din födelseår:");
    scanf(" %d", &birthyear);

    int cost;
    if (birthyear >= 1980 && birthyear < 1990)
        printf("Du är född på 1980-talet.\n");
    else if (birthyear < 2000 && birthyear >= 1990)
        printf("Du är född på 1990-talet.\n");
    else if (birthyear >= 2000 && birthyear < 2000)
        printf("Du är född på 00-talet.\n");
    else if (birthyear < 1980 || birthyear >= 2000)
        printf("Du är inte född på 1990 eller 1980-talen.\n");
}