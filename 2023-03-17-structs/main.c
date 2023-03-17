// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// // Filer - 
// // Kort repetition från video, text + binary
// // TEXT-filer
// //      sökvägar
// //      vi skapar en textfil i Notepad och läser in + skriver ut alla rader som innehåller
// //                      ett fult ord

// // BINÄR-filer - finns på video

// // Ni labbar PS Fåglarna - sortera? 
// //              GOOGLE

// typedef struct {
//     int Age;
//     int Jersey;
//     char Name[100];
// }Player;

// void PrintPlayer2(Player p){
//     strcpy(p.Name, "Whatever");
//     printf("%s\n",p.Name);
// }


// void PrintPlayer(Player *p){
//     strcpy(p->Name, "Whatever");
//     printf("%d\n",p->Age);
//     printf("%s\n",p->Name);
// }


// void ArraysAverage(){
//     int num;
//     printf("Hur många:");
//     scanf(" %d", &num);
//     int *arr = (int *)malloc(num*sizeof(int));
//     for(int i = 0; i < num;i++){
//         printf("Ange tal %d:", i+1);
//         scanf(" %d", &arr[i]);
//     }
//     float sum;
//     for(int i = 0; i < num;i++){
//         sum += arr[i];
//     }
//     printf("Average=%f", sum/num);

// }


// void ArraysExtend(){
//     int inputNumber = 0;
//     int num;
//     printf("Enter number to start with:");
//     scanf(" %d", &num);
//     int *arr = (int *)malloc(num*sizeof(int));
//     for(int i = 0; i < num;i++){
//         inputNumber++;
//         printf("Ange tal %d:", inputNumber);
//         scanf(" %d", &arr[i]);
//     }
//     float sum;
//     for(int i = 0; i < num;i++){
//         sum += arr[i];
//     }
//     printf("Average=%f", sum/num);

//     while(1){
//         printf("Enter number to EXTEND array:");
//         scanf(" %d", &num);
//         int newSize = (inputNumber + num)*sizeof(int);
//         arr = (int *)realloc(arr, newSize);
//         for(int i = 0; i < num;i++){
//             inputNumber++;
//             printf("Ange tal %d:", inputNumber);
//             scanf(" %d", &arr[inputNumber-1]);
//         }
//         float sum;
//         for(int i = 0; i < inputNumber;i++){
//             sum += arr[i];
//         }
//         printf("Average=%f", sum/inputNumber);

//     }

// }

// void fileDemo1(){
//    int num;
//    FILE *fptr;

//    // use appropriate location if you are using MacOS or Linux
//    fptr = fopen("program.txt","w");

//    if(fptr == NULL)
//    {
//       printf("Error!");   
//       exit(1);             
//    }

//    printf("Enter num: ");
//    scanf("%d",&num);

//    fprintf(fptr,"%d\nHello\n",num);
//    fprintf(fptr,"Hej");
//    fclose(fptr);


// // ta bort \n fgets
// // array PlayerStruct och läsa och skriva till binary file!

// }

// void fileDemo2(){
//     FILE* filePointer;
//     int bufferLength = 255;
//     char buffer[bufferLength]; 

//     filePointer = fopen("program.txt", "r");
//     if(filePointer == NULL){
//         printf("Fel\n");
//         return;

//     }

//     while(fgets(buffer, bufferLength, filePointer)) {
//         buffer[strcspn(buffer, "\r\n")] = 0;
//         printf("%s\n", buffer);
//     }

//     fclose(filePointer);
    
// }

// int main(){

//     Player players[10];
//     // players[0].Age = 12;
//     // players[0].Jersey = 21;
//     // strcpy(players[0].Name, "Stefan");
//     // players[1].Age = 21;
//     // players[1].Jersey = 22;
//     // strcpy(players[1].Name, "Jalle");

//     // FILE *f = fopen("players.bin", "wb");
//     // for(int i=0; i < 10; i++){
//     //     fwrite(&players[i], sizeof(Player),1,f);
//     // }
//     // //fwrite(players, sizeof(Player),10,f);
//     // fclose(f);

//     FILE *f = fopen("players.bin", "rb");
//     for(int i=0; i < 10; i++){
//         fread(&players[i], sizeof(Player),1,f);
//     }
//     fclose(f);




//     //fileDemo1();
//     fileDemo2();

//     //ArraysAverage();
//     ArraysExtend();


    


//     // PrintPlayer(&p1);
//     // printf("%s\n", p1.Name);

//     return 0;
// }