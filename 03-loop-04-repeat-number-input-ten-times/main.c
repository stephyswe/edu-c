#include <stdio.h>
#include <stdbool.h>

void main(){
  // input number ten times and print the sum of the numbers
    int sum = 0;
    int number = 0;
    for (int i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    }

    printf("The sum of the numbers is %d", sum);
}