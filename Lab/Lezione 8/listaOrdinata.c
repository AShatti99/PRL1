/*
Scrivere un programma che acquisisca da tastiera una successione di numeri
interi positivi e li inserisca in maniera ordinata (crescente) all’interno di una
lista. La lista puo’ contenere duplicati. L’acquisizione da tastiera termina
quando si incontra il primo valore negativo (che non va inserito in lista) e
viene stampato il contenuto corrente della lista
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
void sortList(ListaDiElementi l);
void swap(ListaDiElementi e1, ListaDiElementi e2);
void print (ListaDiElementi l);

int main(void){

    ListaDiElementi lista=NULL;

    int n;
    int fine=0;

    while(!fine){

        scanf("%d",&n);

        if(n>=0){

            lista=insHead(lista, n); // inserisci tutti gli elementi in testa
        }
        else{

            fine=1;                 // se n e' negativo esci dal while
        }
    }

    sortList(lista);               // ordina la lista

    print(lista);                  // stampala
}

ListaDiElementi insHead(ListaDiElementi l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista));  // crea e inserisce in testa ogni elemento

    nuovo->info=v;
    nuovo->next=l;

    return nuovo;
}

void sortList(ListaDiElementi l){

    ListaDiElementi temp1, temp2;             // come negli array sicuramente non efficiente

    for(temp1=l; temp1!=NULL; temp1=temp1->next){

        for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next){

            if(temp1->info > temp2->info){

                swap(temp1, temp2);
            }
        }
    }
}

void swap(ListaDiElementi e1, ListaDiElementi e2){   // scambia i valori

    int a=e1->info;
    e1->info=e2->info;
    e2->info=a;
}

void print (ListaDiElementi l){

    while(l!=NULL){

        printf("%d\n",l->info);
        l=l->next;
    }
}
