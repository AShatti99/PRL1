// funzione che mi dice se l'array passato come argomento e' in ordine crescente o no

#include <stdio.h>

int ordinato(int a[], int dim);  // a[dim] NON ESISTE. L'ultimo elemento di a ha indice (dim-1)
void read(int a[], int dim);

int main(void){

    int ord;

    int a[2];
    int b[3];

    read(a,2);                    // legge da tastiera i valori dell'array

    puts("");

    read(b,3);

    ord=ordinato(a,2);             // restituisce il valore di tuttOK e lo assegna a ord
    printf("ord: %d\n",ord);

    ord=ordinato(b,3);
    printf("ord: %d\n",ord);
}

int ordinato(int a[], int dim){

    int tuttOK=1;

    for(int i=0; i<dim-1; i++){       // non e' ottimizzato. Meglio utilizzare un while che appena
        
        if(a[i] >= a[i+1]){           // scopre due numeri decrescenti, esce
            tuttOK=0;
        }
    }

    return tuttOK;
}

void read(int a[],int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}