#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * FACIT: https://github.com/aspcodenet/CStructFacit

 

ÖVNINGAR

*************

1. Studenter

Skapa en struktur för att lagra information om studenter. 
FirstName 50 tecken, LastName 50 tecken, City 50 tecken, Birthyear ska lagras för varje

Skapa en funktion, InputStudent(Student *), som matar in information om en Student

Anropa funktionen två gånger, en med variabel student1 och en med student2 

Skapa en funktion, PrintStudent(const Student *), skriver ut informationen

Anropa den för både student1 och student2

2. Studenter i ARRAY

Skapa en ARRAY med 10 studenter. Mata in en i taget genom att anropa InputStudent

Efter varje: fråga om du vill mata in en till – men efter 10 så kan man inte göra fler såklart

Du behöver en  variabel som håller reda på hur många du hgar lagtg in i arrayen

Loopa sedan och skriv ut alla inmatade studenter

Skriv dessutom ut namnet på den ÄLDSTA studenten

Hint: loopa och håll antingen reda på vilket INDEX (i) den äldsta har – eller ha en PEKARE 

Student *oldestStudent
till den äldsta
*/


typedef struct {
    int BirthYear;
    char FirstName[50];
    char LastName[50];
    char City[50];
}Student;

void PrintStudent(const Student *p){
    printf("Student information:\n");
    printf("%s %s\n",p->FirstName, p->LastName);
    printf("%s Birth year:%d\n",p->City, p->BirthYear);
}


void InputStudent(Student *p){
    printf("Ny student:\n");
    printf("First name:");
    scanf(" %s", p->FirstName);
    printf("Last name:");
    scanf(" %s", p->LastName);
    printf("City:");
    scanf(" %s", p->City);
    printf("Birth year:");
    scanf(" %d", &p->BirthYear);
}

void Lab1(){
    Student student1;
    Student student2;

    InputStudent(&student1);
    InputStudent(&student2);

    PrintStudent(&student1);
    PrintStudent(&student2);
}

void Lab2(){
    Student studentLista[10];
    int antal = 0;
    
    while(true){
        InputStudent(&studentLista[antal]);
        antal++;
        if(antal == 10)
            break;

        char cont[10];
        printf("Eter one more Yes/No?");
        scanf(" %s", cont);
        strupr(cont);
        
        if(!strcmp(cont, "YES") || !strcmp(cont, "Y")) continue;

        break;
    }

    Student *oldestStudent = &studentLista[0];
    for(int i = 0; i < antal;i++)
        if(studentLista[i].BirthYear < oldestStudent->BirthYear)
            oldestStudent = &studentLista[i];


    for(int i = 0; i < antal;i++)
        PrintStudent(&studentLista[i]);
}






int main(){
    Lab2();
    return 0;
}