/*
Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una
procedura o funzione ricorsiva che prenda in input un intero n e una lista e ne
cancelli tutti gli elementi il cui campo info e’ multiplio di n. Scrivere poi un
programma che acquisisca da tastiera un intero n seguito da una successione
di numeri interi positivi e e li inserisca in ordine di arrivo in testa ad una
lista. La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina
quando si incontra il primo valore negativo (che non va inserito in lista). Si
stampi poi nel main la lista modificata come descritto sopra.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {
    
    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void print (ListaDiElementi l);                 // stampa
void insHead (ListaDiElementi *l, int v);       // inserisce in testa
void reCanc (ListaDiElementi *l, int x);        // elimina

int main(void){

    ListaDiElementi lista=NULL;

    int n;                         // elementi da inserire nella lista
    int fine=0;                    // sentinella per uscire dal while

    int canc;                      // elementi da cancellare

    scanf("%d",&canc);

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insHead(&lista,n);          // inserisce in testa
        }
        else{

            fine=1;                     // esce dal while
        }
    }

    reCanc(&lista, canc);               // elimina gli elementi

    print(lista);                       // stampa
}

void print (ListaDiElementi l){

    if(l==NULL){

        printf("NULL\n");
    }
    else{

        printf("%d -> ",l->info);

        print(l->next);
    }
}

void insHead (ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=v;
    nuovo->next=*l;

    *l=nuovo;
}

void reCanc (ListaDiElementi *l, int x){

    ListaDiElementi temp=*l;

    if(*l!=NULL){           

        if((*l)->info%x==0){          

            *l=temp->next;                   // se e' divisibile, *l diventa l'elemento successivo
            free(temp);                      // libera l'elemento corrente

            reCanc(&(*l), x);                // richiama la funzione
        }
        else{

            reCanc(&(*l)->next, x);          // se non e' divisibile, richiama la funzione con 
        }                                    // l'elemento successivo
    }
}
