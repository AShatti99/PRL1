/*
Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una
funzione ricorsiva RecStampaInversa che stampi gli elementi di una lista
partendo dall’ultimo. Scrivere poi un programma che acquisisca da tastiera
una successione di numeri interi positivi e li inserisca in ordine di arrivo
in testa ad una lista. La lista puo’ contenere duplicati, e l’acquisizione
da tastiera termina quando si incontra il primo valore negativo (che non va
inserito in lista). Si stampi poi il contenuto corrente della lista usando la
funzione RecStampaInversa.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {
    
    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void insHead (ListaDiElementi *l, int v);
void recStampaInversa (ListaDiElementi l);

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insHead(&lista, n);
        }
        else{

            fine=1;
        }
    }

    recStampaInversa(lista);
    printf("NULL\n");
}

void insHead (ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=v;
    nuovo->next=*l;

    *l=nuovo;
}

void recStampaInversa (ListaDiElementi l){

   if(l==NULL){                 // si sposta al successivo ad ogni ciclo, quando l diventa NULL, esegue tutte 

       return;                  // le istruzioni precedenti, dall'ultimo elemento fino al primo
   }
   
   recStampaInversa(l->next);
   printf("%d -> ",l->info);
}

