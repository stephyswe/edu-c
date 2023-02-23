#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int addNumberLessThen100(int tal1, int tal2){
    int result = 0;
    if(tal1 < 100)
        result += tal1;
    if(tal2 < 100)
        result += tal2;
    return result;
}

void main(){
    int res = addNumberLessThen100(12.3,20);
    printf("what does it be: %d", res);

    int tal;
    scanf("%d", &tal);
    int res2 = addNumberLessThen100(99, tal);
}