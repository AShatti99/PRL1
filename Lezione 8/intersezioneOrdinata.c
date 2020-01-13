/*
Scrivere un programma che acquisisca da tastiera due successioni di interi
positivi, entrambe terminate da un numero negativo, e le inserisca in due
liste distinte. Scegliere se realizzare una procedura o una funzione che, prese
in input le due liste, crei una terza lista contenente l’intersezione ordinata
tra le due precedenti: non vi devono quindi essere elementi ripetuti e i valori
devono essere memorizzati in ordine crescente. Si stampi il contenuto della
lista intersezione.
Nota: potete organizzare le due liste in input come meglio ritenete necessario.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {

    int info;
    struct el * next;
};

typedef struct el ElementoDILista;
typedef ElementoDILista * ListaDiElementi;

ListaDiElementi read (ListaDiElementi l);               // legge la lista
ListaDiElementi insHead (ListaDiElementi l, int v);     // inserisce nella lista
int member (ListaDiElementi l, int el);                 // mi dice se trova un elemento uguale
ListaDiElementi sort (ListaDiElementi l);               // ordina la lista
void swap (ListaDiElementi l1, ListaDiElementi l2);     // scambia due elementi
ListaDiElementi delete (ListaDiElementi l);             // elimina i doppioni
void print (ListaDiElementi l);                         // stampa la lista

int main(void){

    ListaDiElementi l1=NULL;
    ListaDiElementi l2=NULL;

    ListaDiElementi l3=NULL;

    l1=read(l1);
    l2=read(l2);

    while(l1!=NULL){

        if( member(l2, l1->info) ){        

            l3=insHead(l3, l1->info);   // se l->info compare in l2 inserisce quel elemento in l3
            l1=l1->next;                // e va avanti
        }
        else{

            l1=l1->next;               // se non compare, continua la ricerca
        }
    }   

    if(l3!=NULL){                      // se l3 e' diverso da NULL, riordina la lista e elimina i duplicati

        l3=sort(l3);
        l3=delete(l3); 
    }

    print(l3);                        // stampa l3
}


ListaDiElementi read (ListaDiElementi l){

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){                   // se n>=0 inserisce quell'elemento in testa alla lista

            l=insHead(l,n);
        }
        else{                       // senno' esce dal while

            fine=1;
        }
    }

    return l;
}


ListaDiElementi insHead (ListaDiElementi l, int v){   

    ListaDiElementi nuovo=malloc(sizeof(ElementoDILista));

    nuovo->info=v;
    nuovo->next=l;

    return nuovo;
}


int member (ListaDiElementi l, int el){

    int trovato=0;

    while (l!=NULL && !trovato) {      

        if(el==l->info){       // se l'elemento compare, esce dal while

            trovato=1;
        }
        else{                  // senno' continua la ricerca

            l=l->next;
        }
    }

    return trovato;
}


ListaDiElementi sort (ListaDiElementi l){       // riordina con il bubble sort

    ListaDiElementi temp1, temp2;

    for(temp1=l; temp1!=NULL; temp1=temp1->next){

        for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next){

            if(temp1->info > temp2->info){

                swap(temp1, temp2);
            }
        }
    }

    return l;
}


void swap (ListaDiElementi l1, ListaDiElementi l2){      

    int value=l1->info;
    l1->info=l2->info;
    l2->info=value;
}


ListaDiElementi delete (ListaDiElementi l){

    ListaDiElementi temp1=l;
    ListaDiElementi temp2;

    while(temp1->next!=NULL){

        if(temp1->info == (temp1->next)->info){  // se l'elemento corrente e' uguale al successivo

            temp2=(temp1->next)->next;           // temp2 diventa l'elemento successivo del successivo
            free(temp1->next);                   // libera l'elemento successivo
            temp1->next=temp2;                   // l'elemento corrente si attacca all'elemento successivo successivo
        }
        else{

            temp1=temp1->next;                   // continua la ricerca
        }
    }

    return l;
}


void print (ListaDiElementi l){

    while (l!=NULL) {
        
        printf("%d\n",l->info);
        l=l->next;
    }
}

