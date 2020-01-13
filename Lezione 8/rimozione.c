/*
Si implementi una lista concatenata che contenga, come dati, interi positivi.
Si scelga se implementare procedure o funzioni che realizzino i seguenti punti:
• Aggiungere un elemento in fondo alla lista;
• Aggiungere un elemento in cima alla lista;
• Dato un valore positivo v, eliminare la prima occorrenza di v nella lista
(non modificare la lista nel caso che non contenga v);

Quindi, scrivere un programma che legga degli interi. Per ogni intero letto
(e nello stesso ordine dell’input), si applichi una delle seguenti modifiche:

• Se il valore letto v `e strettamente negativo, rimuovere il primo elemento
uguale a |v| dalla lista (non modificare la lista nel caso che questa non
contenga |v|);
• Se il valore letto v `e positivo e pari, aggiungerlo in cima alla lista;
• Se il valore letto v `e positivo e dispari, aggiungerlo in fondo alla lista;
• Se il valore letto `e 0, terminare l’esecuzione del programma stampando,
in ordine, gli elementi della lista.
*/

#include <stdio.h>
#include <stdlib.h>

struct el {
    
    int info;
    struct el * next;
};

typedef struct el ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

ListaDiElementi insHead(ListaDiElementi l, int v);
ListaDiElementi insTail(ListaDiElementi l, int v);
ListaDiElementi toRemove(ListaDiElementi l, int v);
void print (ListaDiElementi l);

int main(void){

    ListaDiElementi lista=NULL;

    int n;                          // dato in input
    int fine=0;                     // serve per terminare l'inserimento dei dati in input

    while(!fine){
        
        scanf("%d",&n);             

        if(n>0){

            if(n%2==0){

                lista=insHead(lista, n);

            }
            else{
                
                lista=insTail(lista, n);
            }
        }
        else if(n<0){

            n=n*(-1);
            lista=toRemove(lista, n);

        }
        else{
            
            print(lista);       // stampa
            fine=1;             // esce dal while
            
        }
    }
}

void print (ListaDiElementi l){

    while(l!=NULL){

        printf("%d\n",l->info);
        l=l->next;
    }
}

ListaDiElementi insHead(ListaDiElementi l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista)); // crea e inserisce in testa un nodo

    nuovo->info=v;
    nuovo->next=l;

    return nuovo;
}

ListaDiElementi insTail(ListaDiElementi l, int v){
    
    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));
    
    nuovo->info=v;
    nuovo->next=NULL;
    
    ListaDiElementi ultimo=l;
    
    if(l==NULL){            // se l e' NULL allora ritorna nuovo come primo e ultimo elemento
        
        return nuovo;
    }
    else{                  // significa che ci stanno altri nodi
        
        while(ultimo->next!=NULL){ // arriva fino all'ultimo nodo
            
            ultimo=ultimo->next;
        }
        
        ultimo->next=nuovo;    // attacca "nuovo" infondo all'ultimo elemento
    }
    
    return l;
}

ListaDiElementi toRemove(ListaDiElementi l, int v){

    if(l!=NULL){  // se l e' uguale a NULL non deve fare nulla

        ListaDiElementi temp1, temp2;

        temp1=l;
        temp2=l->next;

        if(temp1->info==v){         // se il primo elemento e' uguale a v, il secondo nodo diventa il primo

            l=l->next;
            free(temp1);            // e libera il primo nodo
        }
        else{

            while(temp2!=NULL){     

                if(temp2->info==v){            // se il nodo successivo e' uguale a v

                    temp1->next=temp2->next;  // attacca l al nodo successivo del successivo
                    free(temp2);              // libera il nodo successivo

                }
                else{

                    temp1=temp2;              // scorre la lista
                    temp2=temp2->next;
                }
            }
        }
    }

    return l;
}

