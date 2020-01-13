/*
Le liste concatenate permettono di creare facilmente altre strutture dati,
come ad esempio le pile. Partendo dalla definizione

struct elemento{
    int info;
    struct elemento * next;
};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

scegliere se realizzare una procedura o una funzione che :
1. data la testa della lista (passata opportunamente alla procedura o funzione) 
e un intero v aggiunga in testa alla lista un nuovo nodo contenente il valore v;

2. data la testa della lista (passata opportunamente alla procedura o funzione) 
rimuova il nodo in cima alla lista, se la lista non `e vuota, altrimenti non deve fare nulla;

3. data la testa della lista stampi il contenuto attuale della lista.

Il programma dovra’ acquisire da tastiera una lista di numeri interi. 
L’operazione da eseguire dipende dal valore acquisito:

• se il valore e’ strettamente maggiore di 0, inserisce il valore in lista
usando la procedura o funzione del punto 1;

• se il valore e’ pari a 0, rimuove il nodo usando la procedura o funzione
del punto 2;

• se il valore e’ strettamente minore di 0 termina stampando il contenuto
corrente della lista usandola procedura del punto 3.
*/


#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int info;
    struct elemento * next;
};

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

ListaDiElementi toInsert(ListaDiElementi l, int v);
ListaDiElementi toDelete(ListaDiElementi l);
void print(ListaDiElementi l);

int main(void){

    ListaDiElementi lista=NULL;

    int n;                              // dato in input
    int fine=0;                         // serve per terminare il while    

    while(!fine){

        scanf("%d",&n);

        if(n>0){

            lista=toInsert(lista,n);
        }
        else if(n==0){

            lista=toDelete(lista);
        }
        else {

            print(lista);               // stampa la lista
            fine=1;                     // esce dal while
        }
    }
}

ListaDiElementi toInsert(ListaDiElementi l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));  // crea e inserisce in testa

    nuovo->info=v;
    nuovo->next=l;  

    return nuovo;
}

ListaDiElementi toDelete(ListaDiElementi l){

    if(l!=NULL){                    // se l non e' uguale a NULL

        ListaDiElementi temp=l;    // il primo elemento diventa il secondo nodo
        l=l->next;
        free(temp);               // libera il primo elemento
    }

    return l;
}


void print(ListaDiElementi l){

    while(l!=NULL){

        printf("%d\n",l->info);
        l=l->next;
    }
}
