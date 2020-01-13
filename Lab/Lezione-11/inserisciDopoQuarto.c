/*
Scrivere un programma che acquisisca da tastiera una successione di numeri
interi positivi e li inserisca in ordine di arrivo in una lista.
Il programma legge anche dall’input un valore intero n.
Si scriva una procedura/funzione che preso una lista e un intero n inserisca
l’intero dopo il quarto elemento della lista.
Se gli elementi della lista sono meno di 4 si inserisca l’elemento in coda. Nel
main poi si stampi la lista cosi’ ottenuta.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void insTail(ListaDiElementi *l, int v);                // inserisce in coda
void print (ListaDiElementi l);                         // stampa
void insFour(ListaDiElementi *l, int f);                // inserisce dopo il quarto
int lengthList (ListaDiElementi l);                     // mi indica la lunghezza

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    int q;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            insTail(&lista, n);
        }
        else{

            fine=1;
        }
    }

    scanf("%d",&q);

    insFour(&lista, q);

    print(lista);
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

void print (ListaDiElementi l){

    if(l==NULL){

        printf("NULL\n");
    }
    else{

        printf("%d -> ",l->info);
        print(l->next);
    }
}

void insFour(ListaDiElementi *l, int f){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));  // creo il nuovo elemento

    nuovo->info=f;                                          // assegno il valore dato in input

    if( lengthList(*l) > 4){               // se la lunghezza e' maggiore di 4:

        ListaDiElementi temp1=*l;
        ListaDiElementi temp2=(*l)->next;

        int c=1;                                        // contatore per indicarmi a quando arrivo a 4

        while(*l!=NULL && c!=5){    

            if(c==4){

                temp1->next=nuovo;                     // se c vale 4, faccio gli assegnamenti opportuni
                nuovo->next=temp2;

                c++;                                   // c diventa 5 ed esco dal while
            }
            else{

                c++;                                  // senno' incremento c

                temp1=temp2;                          // e scorro la lista
                temp2=temp2->next;
            }
        }
    }
    else{                               // se la lunghezza e' minore di 4

        nuovo->next=NULL;               // nuovo e' l'ultimo elemento

        ListaDiElementi ultimo=*l;

        if(*l==NULL){                   // se f e' l'unico l'elemento

            *l=nuovo;
        }
        else{                          // senno' scorri, per attaccare l'ultimo elemento a nuovo

            while (ultimo->next!=NULL) {
                
                ultimo=ultimo->next;
            }

            ultimo->next=nuovo;
        }
    }
}

int lengthList (ListaDiElementi l){

    if(l==NULL){

        return 0;
    }
    else{
    
        return 1 + lengthList(l->next);
    }
}
