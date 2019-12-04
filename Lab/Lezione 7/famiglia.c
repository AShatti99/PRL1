/*
Dato le seguenti dichiarazioni da copiare nel proprio programma
struct persona {
char nome[10];
struct persona * mamma;
struct persona * babbo;
} ;
typedef struct persona Persona;
si scriva un programma che dichiara tre variabili di tipo persona e leggendo
da input prima il nome del figlio (composto da 10 caratteri eventualmente
aggiungendo il carattere speciale $), seguito dal nome della madre (composto
da 10 caratteri eventualmente aggiungendo il carattere speciale $) e infine
dal nome del padre (composto da 10 caratteri eventualmente aggiungendo il
carattere speciale $) riempia e inizializzi in modo opportuno le tre strutture
(utilizzando la costante NULL dove il padre e la madre non siano conosciuti)
in modo da rappresentare una famiglia di 3 persone. Si scriva inoltre una
procedura che presa una persona stampi il nome e a capo il nome della madre
se esiste altrimenti si stampi ”Sconosciuto” (si controlli che il puntatore 
relativo sia diverso da NULL) seguito dal nome del padre se esiste altrimenti
si stampi ”Sconosciuto” (si controlli che il puntatore relativo sia diverso da
NULL). Si chiami la funzione su tutti e tre i componenti della famiglia.
*/

#include <stdio.h>

struct persona {
    char nome[10];
    struct persona * mamma;
    struct persona * babbo;
} ;

typedef struct persona Persona;

void read(Persona *tizio);
void print(Persona tizio);

int main(void){

    Persona figlio, madre, padre;
    
    read(&figlio);
    read(&madre);
    read(&padre);

    figlio.babbo=&padre;
    figlio.mamma=&madre;

    padre.babbo=NULL;
    padre.mamma=NULL;

    madre.babbo=NULL;
    madre.mamma=NULL;

    print(figlio);
    print(madre);
    print(padre);
}

void read(Persona *tizio){

    for(int i = 0; i < 10; i++) {
        scanf("%c", &tizio->nome[i]);
    }
}

void print(Persona tizio){

    int i;

    for(i=0; i<10; i++){

        printf("%c",tizio.nome[i]);
    }

    puts("");

    if(tizio.mamma!=NULL){

        for(i=0; i<10; i++){

            printf("%c",tizio.mamma -> nome[i]);
        }
    }
    else{

        printf("Sconosciuto");
    }

    if(tizio.babbo!=NULL){

        for(i=0; i<10; i++){

            printf("%c",tizio.babbo -> nome[i]);
        }
    }
    else{

        printf("Sconosciuto");
    }

    puts("");
}
