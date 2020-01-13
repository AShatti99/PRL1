/*
Scrivere un programma che acquisisca da tastiera due numeri N e M (con
N < M) e una successione di numeri interi positivi e li inserisca all’interno
di una lista. La lista non pu`o contenere duplicati. L’acquisizione da tastiera
termina quando si incontra il primo valore negativo (che non va inserito in
lista).
Dopo aver memorizzato la sequenza in una lista ordinata, utilizzare una
funzione per calcolare il prodotto degli elementi della lista compresi tra N
e M. In particolare, si scriva una funzione che riceve come parametro la
testa della lista e i due interi N e M e che restituisce il prodotto dei soli
valori della lista compresi tra N e M. Se la lista `e vuota, la funzione deve
restituire il valore –1. Ad esempio passando come parametro la testa della
lista 1 → 2 → 3 → 4 → 5 → 7 → 8 → 9 → NULL e i valori N = 3, M = 7,
la funzione deve restituire 20, dato che 4*5=20.
*/

#include <stdio.h>                 // controlla i testcase, output4 non funge, input 10 e 20.
#include <stdlib.h>                // 20 non ci sta nella lista, e dovrebbe tornare 1848, impossibile

struct el {                        // al posto di 20, ci dovrebbe essere 40, perche' 11*12*14=1848

    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

void insTail (ListaDiElementi *l, int r);          // inserisce in coda
int product(ListaDiElementi l, int n, int m);      // calcola il prodotto

int main(void){

    ListaDiElementi lista=NULL;

    int x;                                // primo numero in inout
    int y;                                // secondo numero in input

    int q;                                // elemento di lista
    int fine=0;                           // per uscire dal while

    int ris;

    scanf("%d",&x);
    scanf("%d",&y);

    while(!fine){

        scanf("%d",&q);

        if(q>=0){

            insTail(&lista, q);
        }
        else{

            fine=1;
        }
    }

    ris=product(lista, x, y);

    printf("%d\n", ris);
}

void insTail (ListaDiElementi *l, int r){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));

    nuovo->info=r;
    nuovo->next=NULL;

    ListaDiElementi ultimo=*l;

    if(*l==NULL){

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

int product(ListaDiElementi l, int n, int m){

    int c=1;

    if(l==NULL){                 // se la lista e' vuota restituisce -1

        c=-1;
        return c;
    }
    
    while(l!=NULL){

        if(l->info==n){           // se l->info e' uguale a n, incomincia a calcolare il prodotto

            l=l->next;            // dall'elemento successivo, finche' non trova m

            while (l->info!=m) {

                c=c*l->info;
                l=l->next;
            }  

            return c;             // dopo aver trovato m, esce, senza controllare il resto della lista
        }
        else{

            l=l->next;            // se l->info non e' uguale a n, va avanti
        }
    }

    return c;       // se n e m non ci stanno restituisce 1 (anche se nel testo non ci sta scritto)
}                   // ma in un testcase c'e' questo caso

