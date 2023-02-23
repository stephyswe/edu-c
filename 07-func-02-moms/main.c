#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

float calculateVat(float priceIncVat) {
    return priceIncVat * 0.2;
}

void main(){
    float price;
    printf("Ange pris inkl. moms: ");
    scanf("%f", &price);
    float vat = calculateVat(price);
}