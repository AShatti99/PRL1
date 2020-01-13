/*
Scrivere un programma che legga una successione di numeri interi positivi e
li inserisca in ordine di arrivo ad una lista. L’acquisizione da tastiera termina
quando si incontra il primo valore negativo (che non va inserito in lista).
Si scriva un programma che usando opportune procedure o funzioni individui 
il primo numero dispari (se esiste altrimenti -1) e il primo numero pari
(se esiste altrimenti -1) degli elementi della lista.
Le funzioni/procedure non devono necessariamente scorrere tutta la lista
ma si devono fermare appena possibile.
Le funzioni/procedure non devono stampare nulla ma passare al main i
valori trovati.
Nel main poi si stampino i valori ottenuti.
N.B E’ possibile scrivere una procedura che trovi entrambi i valori.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void insTail(ListaDiElementi *l, int v);      // inserisce in coda
int firstOdd (ListaDiElementi l);             // individua il primo elemento dispari
int firstEven (ListaDiElementi l);            // quello pari

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insTail(&lista, n);
        }
        else{

            fine=1;
        }
    }

    int dispari=firstOdd(lista);
    int pari=firstEven(lista);
    
    printf("%d\n",dispari);
    printf("%d\n",pari);
}

void insTail(ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=v;
    nuovo->next=NULL;

    ListaDiElementi ultimo=*l;

    if((*l)==NULL){

        *l=nuovo;
    }
    else{

        while (ultimo->next!=NULL)
        {
            ultimo=ultimo->next;
        }

        ultimo->next=nuovo;
    }
}

int firstEven (ListaDiElementi l){

    int c=-1;    // c e' -1, nel caso non ci sia nessun numero pari

    while(l!=NULL && c==-1){

        if(l->info%2==0){

            c=l->info;    // se l e' pari, assegna a c il valore ed esce dal while
        }
        else{

            l=l->next;
        }
    }

    return c;          // restituisce c
}

int firstOdd (ListaDiElementi l){    // uguale a firstEven

    int c=-1;

    while(l!=NULL && c==-1){

        if(l->info%2!=0){

            c=l->info;
        }
        else{

            l=l->next;
        }
    }

    return c;
}