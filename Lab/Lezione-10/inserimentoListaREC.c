/*
Partendo dalla definizione di ListaDiElementi data a lezione, realizzare
una procedura (funzione che restituisca void) ricorsiva che prenda in input
una lista e inserisca un elemento di valore −1 prima di ogni elemento pari.
Scrivere poi un programma che acquisisca da tastiera una successione di
numeri interi positivi e e li inserisca in ordine di arrivo in testa ad una lista.
La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando
si incontra il primo valore negativo (che non va inserito in lista). Si stampi
poi nel main la lista ottenuta.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void print(ListaDiElementi l);                      // stampa
void insHead(ListaDiElementi *l, int v);            // inserisce in testa
void insOne(ListaDiElementi *l);                    // inserisce -1

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insHead(&lista,n);
        }
        else{

            fine=1;
        }
    }

    insOne(&lista);

    print(lista);
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

void insHead(ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=v;
    nuovo->next=*l;
    *l=nuovo;
}

void insOne(ListaDiElementi *l){

    if(*l!=NULL){

        if((*l)->info%2==0){      // se l e' pari

            ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));    // inserisce -1 prima di l

            nuovo->info=-1;
            nuovo->next=*l;
            *l=nuovo;                       // nuovo e' la nuova "testa" 

            insOne(&(*l)->next->next);      // richiama la funzione con l'elemento successivo successivo ad l
        }                                   // (l=nuovo)
        else{

            insOne(&(*l)->next);  // continua a cercare con l'elemento successivo ad l
        }
    }
}