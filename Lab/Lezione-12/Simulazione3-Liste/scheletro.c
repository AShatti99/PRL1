#include <stdio.h>
#include <stdlib.h>

struct El {

    int info;
    struct El * next;
};

typedef struct El ElementoLista;
typedef ElementoLista * ListaDiElementi;

/* Fuctions/Procedure to be implemented:

... // add definition of procedure/fuction readList()
... // add definition of procedure/fuction cancellaDuplicates()
... // add definition of procedure/fuction filterLists()
*/

// Fuction to print all the elements of the list:
void printList (ListaDiElementi list){

    printf("(");
    while (list !=NULL) {
        printf("%d ", list->info);
        list=list->next;
    }
    printf(")");
}

int main(){

    ListaDiElementi first_list, second_list;

    /* Read and print the first list:
    ... // add call to procedure/fuction readList()
    */

    printf("Prima lista\n");
    printList(first_list);

    /* Eliminates Duplicates from the first list:
    ... // add call to procedure/fuction cancellaDuplicates()
    */

    printf("Prima lista senza duplicati\n");
    printList(first_list);

    /* Read and print the second list:
    ... // add call to procedure/fuction readList()
    */

    printf("Seconda lista\n");
    printList(second_list);

    /* Eliminates Duplicates from the first list:
    ... // add call to procedure/fuction cancellaDuplicates()
    */

    printf("Seconda lista senza duplicati\n");
    printList(second_list);

    /* Filter the first list using the elements of the second list:
    ... // add call to procedure/function filterLists()
    */

    // Print the filtered list:
    printf("Lista filtrata\n");
    printList(first_list);

    return 0;
}