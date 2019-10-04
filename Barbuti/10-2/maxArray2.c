// vogliamo due risultati: il valore massimo e il suo indice (CON FUNZIONE)
// es: {7, -2, 10, -3, -4, 2} -> il massimo e' 10 e il suo indice e' 2

#include <stdio.h>

int max(int a[], int dim, int *indMax);
void read(int a[], int dim);

int main(void){

    int a[5];
    int m;   // il massimo valore
    int im;  // il suo indice

    read(a,5);

    m= max(a, 5, &im);  //&im cosi' contiene l'indice del valore massimo

    printf("\nMax: %d \nIndice: %d\n",m,im);

} 

/* Una funzione non puo' restituire due risultati, allora se io voglio due risultati posso fare
una funzione come max cioe' che ti restituisce un risultato e modifica un argomento oppure
puoi scrivere una procedura che modifica i suoi due argomenti passati come indirizzo delle variabili
da modificare */

int max(int a[], int dim, int *indMax){  

    int m=a[0];        // Nel caso in cui ci siano piu' occorenze del valore massimo ci deve restituire
    int im=0;          // quale indice? Del primo!

    for(int i=1; i<dim; i++){

        if(a[i]>m){    // se vogliamo l'indice dell'ultimo mettiamo >=
            m=a[i];
            im=i;
        }
    }

    *indMax=im;

    return m;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}