/*
Scrivere un programma che acquisisca da tastiera una successione di numeri
interi positivi e li inserisca in ordine di arrivo in una lista.
Il programma legge anche dall’input un valore intero n. 
Si scriva una procedura/funzione che preso una lista e un intero n cancelli 
dalla lista i primi n elementi. Nel main poi si stampi la lista cosi’ ottenuta.
N.B. Non devono essere usate altre liste o array di appoggio
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void insTail(ListaDiElementi *l, int v);       // inserisce in coda
void nRemove(ListaDiElementi *l, int x);       // elimina i primi n elementi
void print(ListaDiElementi l);                 // stampa

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;
    int canc;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insTail(&lista, n);        // inserisce in coda
        }
        else{

            fine=1;                    // esce dal while
        }
    }

    scanf("%d",&canc);                 // n elementi da eliminare

    nRemove(&lista, canc);             // elimina

    print(lista);                      // stampa
}

void insTail(ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=v;
    nuovo->next=NULL;

    ListaDiElementi ultimo=*l;

    if(*l==NULL){

        *l=nuovo;
    }
    else{

        while(ultimo->next!=NULL){

            ultimo=ultimo->next;
        }

        ultimo->next=nuovo;
    }
}

void nRemove(ListaDiElementi *l, int x){

    ListaDiElementi temp=*l;

    if(*l!=NULL && x>0) {           // se la lista non e' nulla e x e' maggiore di 0 continua il ciclo

        *l=temp->next;
        free(temp);

        nRemove(&(*l), x-1);        // facendo x-1 ogni volta, finche' non diventa 0
    }
}

void print(ListaDiElementi l){

    if(l==NULL){

        printf("NULL\n");
    }
    else{

        printf("%d -> ",l->info);
        print(l->next);
    }
}
