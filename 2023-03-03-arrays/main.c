#include <stdio.h>
/*
LINK: https://ya.itslearning.com/ContentArea/ContentArea.aspx?LocationType=1&LocationID=6330&ElementID=791073&ElementType=131072&FromNotification=True
FACIT: https://github.com/aspcodenet/cfacit21

1. Skapa ett program där användaren får upp fyra frågor om att mata in ett tal. 
- Spara alla talen i en array. Loopa igenom arrayen och ta fram det tal som är störst. Skriv tillbaka resultatet på skärmen för användaren 

2. Utöka uppgift 2 med en inledande fråga där användaren får ange hur många tal den vill mata in. 
- Gör sedan samma sak för att ta fram det största talet. 

3. Skapa en array av 5 heltal och fyll den med värden. 
- Byt ut alla udda tal i arrayen mot talet 0. Skriv sedan efteråt ut innehållet i hela arrayen till skärmen. 

4. Skapa en array som skall innehålla temperaturmätningar. 
- Användaren får först upp en fråga om hur många mätningar som skall registreras. Sedan får denne ange värde för varje mätning. Detta skall vara decimaltal. Skriv sedan ut alla mätningar och avsluta med att ange en max, en min och en medeltemperatur. 

5. Utöka uppgift 5 med att även ange mätdatum för varje mätvärde. 
- Skriv sedan ut varje mätvärde på samma sätt men tillsammans med mätdatum . Förenkla och låt datum = int ex 20230228

- ett sätt att lösa är att ha TVÅ listor. En med datum och en med temperaturen. Så man lagrar tillhörande data på SAMMA INDEX I båda arrayerna! 
- Lös på sätt 2: överkurs skapa en STRUCT med två properties ?
*/

typedef struct{
    float Value;
    int Date;
} Measurement;

// 1. Skriv ett program som läser in fyra heltal och skriver ut det största av dem.
void FourNumbers(){
    int numbers[4];

    for(int i = 0; i < 4;i++){
        int num;
        printf("Ange tal %d:", i+1);
        scanf(" %d", &num);
        numbers[i] =num;
    }

    int largestSoFar = numbers[0];
    for(int i = 1 ; i < 4; i++){
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
    }
    printf("Largest:%d\n", largestSoFar);
}

void Replace(){
    int arrayen[] = {44,12,345,2,545,45,66,2};
    int antal2 = sizeof(arrayen);
    printf("%d\n",antal2);
    int antal3 = sizeof(int);
    printf("%d\n",antal3);
    int antal = sizeof(arrayen) / sizeof(int);
    for(int i = 0; i < antal;i++){
        if(arrayen[i] % 2 == 0)
            arrayen[i] = 0;
    }
    for(int i = 0; i < antal; i++){
        printf("%d\n",arrayen[i]);
    }

}

void FourNumbers2(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    int numbers[antal];

    for(int i = 0; i < antal;i++){
        int num;
        printf("Ange tal %d:", i+1);
        scanf(" %d", &num);
        numbers[i] =num;
    }

    int largestSoFar = numbers[0];
    for(int i = 1 ; i < antal; i++){
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
    }
    printf("Largest:%d\n", largestSoFar);
}


void TemperatureMeasurements(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    float numbers[antal];

    for(int i = 0; i < antal;i++){
        float num;
        printf("Ange mätvärde %d:", i+1);
        scanf(" %f", &num);
        numbers[i] =num;
    }

    float largestSoFar = numbers[0];
    float smallestSoFar = numbers[0];
    float sum = numbers[0];
    for(int i = 1 ; i < antal; i++){
        sum += numbers[i];
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
        if(numbers[i] < smallestSoFar )
            smallestSoFar = numbers[i];
    }

    for(int i = 0; i < antal;i++)
        printf("Measurement :%d\n%.2f\n", i+1, numbers[i]);
    printf("Average:%.2f", sum/antal);
    printf("Largest:%.2f\n", largestSoFar);
    printf("Smallest:%.2f\n", smallestSoFar);
}


void TemperatureMeasurements2(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    float numbers[antal];
    int dates[antal];

    for(int i = 0; i < antal;i++){
        float num;
        printf("Ange mätvärde %d:", i+1);
        scanf(" %f", &num);
        numbers[i] =num;

        int datum;
        printf("Ange datum yyyyMMdd %d:", i+1);
        scanf(" %i", &datum);
        dates[i] =datum;

    }

    float largestSoFar = numbers[0];
    float smallestSoFar = numbers[0];
    float sum = numbers[0];
    for(int i = 1 ; i < antal; i++){
        sum += numbers[i];
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
        if(numbers[i] < smallestSoFar )
            smallestSoFar = numbers[i];
    }

    for(int i = 0; i < antal;i++)
        printf("Measurement :%d\n%d\n%.2f\n", i+1, dates[i], numbers[i]);
    printf("Average:%.2f", sum/antal);
    printf("Largest:%.2f\n", largestSoFar);
    printf("Smallest:%.2f\n", smallestSoFar);
}


void TemperatureMeasurementsStructs(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    Measurement measurements[antal];
 
    for(int i = 0; i < antal;i++){
        float num;
        printf("Ange mätvärde %d:", i+1);
        scanf(" %f", &num);
        measurements[i].Value =num;

        int datum;
        printf("Ange datum yyyyMMdd %d:", i+1);
        scanf(" %i", &datum);
        measurements[i].Date =datum;

    }

    float largestSoFar = measurements[0].Value;
    float smallestSoFar = measurements[0].Value;
    float sum = measurements[0].Value;
    for(int i = 1 ; i < antal; i++){
        sum += measurements[i].Value;
        if(measurements[i].Value > largestSoFar )
            largestSoFar = measurements[i].Value;
        if(measurements[i].Value < smallestSoFar )
            smallestSoFar = measurements[i].Value;
    }

    for(int i = 0; i < antal;i++)
        printf("Measurement :%d\n%d\n%.2f\n", i+1, measurements[i].Date, measurements[i].Value);
    printf("Average:%.2f", sum/antal);
    printf("Largest:%.2f\n", largestSoFar);
    printf("Smallest:%.2f\n", smallestSoFar);
}


int main(){
    //FourNumbers();
    //FourNumbers2();
    //Replace();
    //TemperatureMeasurements();
    //TemperatureMeasurements2();
    TemperatureMeasurementsStructs();
    return 0;
}