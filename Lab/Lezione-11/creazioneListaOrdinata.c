/*
Scrivere una funzione InserOrd che presa una lista ordinata in maniera non
decrescente inserisca un elemento nella giusta posizione rispetto all’ordinamento.
Si scriva poi un programma che acquisisca da tastiera una sequenza di numeri postivi 
che possono contenere duplicati e li inserisca, usando InserOrd, in una lista 
(ordinata in maniera non decrescente). Nel main si stampi la lista ottenuta.
N.B. Non devono essere usate altre liste o array di appoggio.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void inserOrd(ListaDiElementi *l, int v);
void print (ListaDiElementi l);

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            inserOrd(&lista, n);
        }
        else{

            fine=1;
        }
    }

    print(lista);
}

void inserOrd(ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));     // crea un nuovo elemento
    
    nuovo->info=v;                                             // gli da il valore in input

    ListaDiElementi temp1, temp2;

    temp1=NULL;                  // valore precedente
    temp2=*l;                    // valore corrente

    while (temp2!=NULL && v > temp2->info) {  // se il valore precedente e' diverso da NULL e v > temp2->info      
        
        temp1=temp2;                          // allora il valore precedente e' uguale al valore corrente
        temp2=temp2->next;                    // il valore corrente e' uguale al successivo del valore corrente
    }
                                              // se esce significa il v e' minore del valore corrente
    if(temp1==NULL){                          

        nuovo->next=*l;                       // se temp1 e' uguale a NULL significa che nel while
        *l=nuovo;                             // non vi e' mai entrato, cioe' e' il primo elemento
    }
    else{

        temp1->next=nuovo;                    // senno' fa i collegamenti dopo essere uscito dal while
        nuovo->next=temp2;                    // cioe' il valore precedente si colleghera' a nuovo (v)
    }                                         // nuovo si colleghera' al valore successivo
    
}

void print (ListaDiElementi l){

    if(l==NULL){

        printf("NULL\n");
    }
    else{

        printf("%d -> ", l->info);
        print(l->next);
    }
}