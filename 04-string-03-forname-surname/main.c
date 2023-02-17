#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //FÖR OCH EFTERNAMN
     char fornamn[20];
     char efternamn[20];

     printf("Enter forname:");
     scanf(" %s", fornamn);
     printf("Enter surname:");
     scanf(" %s", efternamn);

     printf("Your name is %s, %s\n", efternamn, fornamn );
}