/* 
Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una
funzione ricorsiva RecStampa che stampi gli elementi di una lista nel formato
mostrato nell’esempio. Scrivere poi un programma che acquisisca da tastiera
una successione di numeri interi positivi e li inserisca in ordine di arrivo
in testa ad una lista. La lista puo’ contenere duplicati, e l’acquisizione
da tastiera termina quando si incontra il primo valore negativo (che non va
inserito in lista). Si stampi poi il contenuto corrente della lista usando la
funzione RecStampa. 
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

ListaDiElementi recStampa (ListaDiElementi l);
ListaDiElementi insHead (ListaDiElementi l, int n);

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){                        

        scanf("%d",&n);

        if(n>=0){

            lista=insHead(lista,n);       // inserisce elementi in testa
        }
        else{

            fine=1;                       // esce dal while
        }
    }

    recStampa(lista);                     // stampa
}

ListaDiElementi insHead (ListaDiElementi l, int n){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=n;
    nuovo->next=l;

    return nuovo;
}

ListaDiElementi recStampa (ListaDiElementi l){

    if(l==NULL){

        printf("NULL\n");                  // stampa ed esce dal ciclo
    }
    else{

        printf("%d -> ",l->info);          // stampa
        recStampa(l->next);                // continua il ciclo
    }
}