#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main(){
    int category;
    bool loop = true;

    while (loop)
    {
        printf("1. Spela spel\n2. Se highscore\n3. Avsluta\n");
        printf("Välj kategori: ");
        scanf(" %d", &category);

        switch (category)
        {
        case 1:
            printf("Spelet startar\n");
            break;
        case 2:

            printf("High score\n");
            break;

        case 3:
            printf("Avsluta");
            loop = false;
            break;

        default:
            printf("Felaktig inmatning\n");
            break;
        }
    }
}