/*
Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una
funzione ricorsiva RecLength che prenda in input una lista e ne restituisca
la lunghezza. Scrivere poi un programma che acquisisca da tastiera una
successione di numeri interi positivi e li inserisca in una lista. La lista puo’
contenere duplicati, e l’acquisizione da tastiera termina quando si incontra il
primo valore negativo (che non va inserito in lista). Si stampi poi la lunghezza
della lista calcolata usando la funzione RecLength.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

ListaDiElementi insHead (ListaDiElementi l, int n);
int recLength (ListaDiElementi l);

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            lista=insHead(lista,n);      // inserisce elementi in testa alla lista
        }
        else{

            fine=1;                      // esce dal while
        }
    }


    printf("%d\n", recLength(lista));    // stampa la lunghezza
}

ListaDiElementi insHead (ListaDiElementi l, int n){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=n;
    nuovo->next=l;

    return nuovo;
}

int recLength (ListaDiElementi l){

    if(l==NULL){                             // se l==NULL mi somma al risultato 0 ed esce dal ciclo

        return 0;
    }
    else{

        return 1 + recLength(l->next);      // mi somma 1 e continua il ciclo
    }
}