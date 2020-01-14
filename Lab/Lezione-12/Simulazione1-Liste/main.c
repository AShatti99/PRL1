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


void insTail(ElementoLista **lista, int v);					// inserisce in coda
int absol(int v);											// calcola il valore assoluto


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

ElementoLista * readList (ElementoLista **lista, int dis){

    int n;
    int fine=0;
	int lastValue;

    while (!fine) {
        
        scanf("%d",&n);

        if(*lista==NULL){								// se la lista e' vuota, inserisce il primo numero

			insTail(&(*lista), n);
            lastValue=n;                                // si ricorda il valore entrato
        }
		else if( absol(n-lastValue) <= dis){            // se | nuovo valore - vecchio valore | inserisce in coda

			insTail(&(*lista), n);
			lastValue=n;								// e si ricorda il valore entrato
		}
        else{

            fine=1;										// senno' esce
        }
    }

	return *lista;
}


void insTail (ElementoLista **lista, int v){		   // inserisce in coda

    ElementoLista * nuovo=malloc(sizeof(ElementoLista));

    nuovo->info=v;

    ElementoLista * ultimo=*lista;

    if(*lista==NULL){

        *lista=nuovo;
    }
    else{

        while (ultimo->next!=NULL)
        {
            ultimo=ultimo->next;
        }

        ultimo->next=nuovo;
    }
}

int absol(int v){				                // mi restituisce |v|

	if(v>0){

		return v;
	}
	else{

		return -v;
	}
}

int maxDistance(ElementoLista *lista){

	int m=0;									// valore massimo trovato finora
	int q;                                      // valore corrente

	ElementoLista * temp1=lista;
	ElementoLista * temp2=lista->next;

	while (temp2!=NULL) {
		
		q=temp1->info - temp2->info;		   // mi calcola valore corrente - valore successivo

		if(absol(q) > m){					   // se |q| > m

			m=absol(q);                        // |q| diventa la nuova m

			temp1=temp2;					   // va avanti
			temp2=temp2->next;
		}
		else{

			temp1=temp2;                       // senno' va avanti
			temp2=temp2->next;
		}
		
	}
	
	return m;
}

ElementoLista * CancellaMax(ElementoLista **lista, int maxdis){

	ElementoLista * temp1= *lista;

	if(*lista==NULL){										// se la lista vuota ritorna

		return *lista;
	}
	else{

		if(temp1->next!=NULL){							   // se il valore successivo non e' nullo

			int q=temp1->info - temp1->next->info;		   // mi calcola valore corrente - valore successivo

			if( absol(q) == maxdis){					   // se |q| == maxdis

				*lista=(*lista)->next;                     // il valore corrente diventa il valore successivo
				free(temp1);                               // si elimina il valore corrente
				CancellaMax(&(*lista), maxdis);            // si continua a cercare
			}
			else{
				
				CancellaMax(&(*lista)->next, maxdis);	   // si continua a cercare
			}
		}
	}
}
