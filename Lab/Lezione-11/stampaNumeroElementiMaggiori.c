/*
Scrivere un programma che acquisisca da tastiera una successione di numeri
interi positivi e li inserisca in ordine di arrivo ad una lista.
La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando
si incontra il primo valore negativo (che non va inserito in lista).
Si stampi: usando la funzione CalcoloSomma la somma dei valori contenuti
negli elementi della lista e usando la funzione CalcoloNElementi il numero
degli elementi nella lista che contengono un valore strettamente maggiore di
un quarto della somma ottenuta dalla funzione CalcoloSomma.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {
    
    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void insTail(ListaDiElementi *l, int v);                  // inserisce in coda
int calcoloSomma(ListaDiElementi l);                      // mi somma i valori
int calcoloNElementi(ListaDiElementi l, int sum);         // mi dice il max tra 1/4 somma

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insTail(&lista, n);             // inserisce in coda
        }
        else{

            fine=1;                         // esce
        }
    }

    int somma=calcoloSomma(lista);                   
    int maggiore=calcoloNElementi(lista, somma);

    printf("%d\n", somma);              // stampa la somma
    printf("%d\n", maggiore);          // stampa il maggiore di 1/4 somma
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

        while (ultimo->next!=NULL) {
            
            ultimo=ultimo->next;
        }

        ultimo->next=nuovo;   
    } 
}

int calcoloSomma(ListaDiElementi l){

    if(l==NULL){

        return 0;                                    // mi somma 0 ed esce
    }
    else{

        return l->info + calcoloSomma(l->next);       // mi somma il valore corrente e continua la ricerca
    }
}

int calcoloNElementi(ListaDiElementi l, int sum){

    float s= sum/4;            // mi calcola 1/4 somma
    int c=0;                   // mi dice quanti valori sono maggiori di s

    while(l!=NULL){
 
        if(l->info > s){      

            c++;
            l=l->next;
        }
        else{

            l=l->next;
        }
    }

    return c;
}


