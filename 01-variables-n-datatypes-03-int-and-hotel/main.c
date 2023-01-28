#include <stdio.h>

void main(){
    int days;
    int pricePerNight;
    int totalPrice;

    printf("Vad kostar hotellet per natt? ");
    scanf(" %d", &pricePerNight);

    printf("Hur många nätter?");
    scanf(" %d", &days);

    totalPrice = days * pricePerNight;
    printf("Det blir %dkr\n", totalPrice);

    //printf("Det blir %dkr\n", days * pricePerNight);
}