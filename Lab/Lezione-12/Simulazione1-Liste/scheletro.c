// Scheletro esercizio  

#include <stdio.h>
#include <stdlib.h>

//List structure:
struct El {
	int  info;
	struct  El *next;
};

typedef struct El  ElementoLista;


// Functions/Procedure  to be implemented:

ElementoLista* readList(ElementoLista **lista, int dis);
int maxDistance(ElementoLista *lista);
ElementoLista*  CancellaMax(ElementoLista **lista, int maxdis);


//Function to print all the elements of the list:
void printList(ElementoLista *list) {
	printf("(");
	while (list != NULL) {
		printf("%d ", list->info);
		list = list->next;
	}
	printf(")\n");
}

int main() {
	ElementoLista *list = NULL, *list_aux = NULL;
	int  boundis, maxdis;

	//Read the  bounded distance
	scanf("%d", &boundis);

	//Read and print the list
	list_aux = readList(&list, boundis);
	printf("La lista bounded-%d e':\n", boundis);
	if (list_aux != NULL)
	{
		list = list_aux;
		list_aux = NULL;
	}
	printList(list);

	//Compute and print the maxdistance of the  list
	maxdis = maxDistance(list);
	printf("La distanza massima e':\n%d\n", maxdis);

	//Removes the elements at distance maxdistance
	list_aux = CancellaMax(&list, maxdis);
	printf("La lista modificata e':\n");
	if (list_aux != NULL) list = list_aux;
	printList(list);

	return 0;
}
