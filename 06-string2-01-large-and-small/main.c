#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 

void largeAndSmall(){
    int num, largest = 0, smallest = 0, flag = 0;

    do {
        GetInputInt("Ange ett positivt nummer, 0 att avsluta:", &num);

        if (num < 0) {
            printf("Negativa tal är inte tillåtna.\n");
            continue;
        }

        if (num == 0) break;

        if (!flag) {
            largest = smallest = num;
            flag = 1;
        }

        else {
            if (num > largest) {
                largest = num;
            }

            if (num < smallest) {
                smallest = num;
            }
        }

    } while (1);

    if (flag) {
        printf("The största talet var %d.\n", largest);
        printf("The minsta talet var %d.\n", smallest);
    }
    else {
        printf("Inga number var inskrivna.\n");
    }
}


void main(){
    largeAndSmall();
}