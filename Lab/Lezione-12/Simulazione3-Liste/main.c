#include <stdio.h>
#include <stdlib.h>

struct El {

    int info;
    struct El * next;
};

typedef struct El ElementoLista;
typedef ElementoLista * ListaDiElementi;

// Fuctions/Procedure to be implemented:

void readList (ListaDiElementi *l);                                 // carica la lista
void insTail (ListaDiElementi *l, int v);                           // inserisce in coda
void cancellaDuplicates(ListaDiElementi *l);                        // elimina i duplicati
void filterLists(ListaDiElementi *l1, ListaDiElementi l2);          // filtra le due liste
int member(ListaDiElementi l, int el);                              // trova elementi in comune

// Fuction to print all the elements of the list:
void printList (ListaDiElementi list){

    printf("(");
    while (list !=NULL) {
        printf("%d ", list->info);
        list=list->next;
    }
    printf(")\n");
}

int main(){

    ListaDiElementi first_list, second_list;

    first_list=NULL;
    second_list=NULL;

    readList(&first_list);

    printf("Prima lista\n");
    printList(first_list);

    cancellaDuplicates(&first_list);

    printf("Prima lista senza duplicati\n");
    printList(first_list);

    readList(&second_list);

    printf("Seconda lista\n");
    printList(second_list);

    cancellaDuplicates(&second_list);

    printf("Seconda lista senza duplicativi\n");
    printList(second_list);
    
    filterLists(&first_list, second_list);
    
// Print the filtered list:
    printf("Lista filtrata\n");
    printList(first_list);

    return 0;
}

void readList (ListaDiElementi *l){

    int n;
    int fine=0;
    int lastValue;

    while(!fine){

        scanf("%d",&n);

        if(*l==NULL){

            insTail(&(*l), n);
            lastValue=n;
        }
        else if(lastValue<=n){

            insTail(&(*l), n);
            lastValue=n;
        }
        else{

            fine=1;
        }
    }
}

void insTail (ListaDiElementi *l, int v){

    ListaDiElementi nuovo=malloc(sizeof(ElementoLista));

    nuovo->info=v;
    nuovo->next=NULL;

    if(*l==NULL){

        *l=nuovo;
    }
    else{

        ListaDiElementi ultimo=*l;

        while (ultimo->next!=NULL) {
            
            ultimo=ultimo->next;
        }

        ultimo->next=nuovo;
    }
}

void cancellaDuplicates(ListaDiElementi *l){

    ListaDiElementi temp=*l;

    if((*l)->next!=NULL){

        if(temp->info == temp->next->info){

            *l=(*l)->next;
            free(temp);
            cancellaDuplicates(&(*l));
        }
        else{

            cancellaDuplicates(&(*l)->next);
        }
    }
}

void filterLists(ListaDiElementi *l1, ListaDiElementi l2){

    ListaDiElementi temp=*l1;

    if (*l1!=NULL) {
        
        if( member(l2, (*l1)->info) ) {

            *l1=(*l1)->next;
            free(temp);

            filterLists(&(*l1), l2);
        }
        else{

            filterLists(&(*l1)->next, l2);
        }
    }
}

int member(ListaDiElementi l, int el){

    int trovato=0;

    while (l!=NULL && !trovato) {
        
        if(el == l->info){

            trovato=1;
        }
        else{

            l=l->next;
        }
    }

    return trovato;
}
