/*
Data la definizione di tipo
typedef enum{false,true} boolean;

partendo dalla definizione di ListaDiElementi data a lezione, realizzare una
funzione ricorsiva che controlla che la lista data in input sia ordinata in
ordine strettamente crescente. Scrivere poi un programma che acquisisca
da tastiera una successione di numeri interi positivi e li inserisca in una
lista mantenendo l’ordine di lettura. La lista puo’ contenere duplicati, e
l’acquisizione da tastiera termina quando si incontra il primo valore negativo
(che non va inserito in lista). Si stampi il risultato della funzione descritta sopra.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

typedef enum{false,true} boolean;

void insTail(ListaDiElementi *l, int v);     // inserisce in coda
boolean reCheck (ListaDiElementi l);         // mi controlla se sono ordinati

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

    if(reCheck(lista)){         

        printf("True\n");
    }
    else{
       
        printf("False\n");
    }
}

void insTail(ListaDiElementi *l, int v){    // inserisce in coda

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

boolean reCheck (ListaDiElementi l){
    
    boolean ris=true;                       // suppongo che sia vera

    if(l->next!=NULL){

        if(l->info < l->next->info){        // se l e' minore dell'elemento successivo
            
            reCheck(l->next);               // vai avanti
        }
        else{
            
            ris=false;                      // senno' mi restituisce false
            return ris;
        }
    }
    else{

        return ris;                         // se per tutto il ciclo, ris e' rimasto true, restituisce ris
    }
}



