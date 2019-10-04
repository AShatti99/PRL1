// shift di un array
// a{-2, 3, 4, -1, 8} -> a{8, -2, 3, 4, -1}  si chiama shift circolare verso destra

#include <stdio.h>

void shift(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);                 // legge l'array in input

    shift(a,5);                // applica la procedura

    puts("\nDopo lo shift circolare verso destra:");

    for(int i=0; i<5; i++){    // stampa il "nuovo" array
        printf("%d\n",a[i]);
    }
}

void shift(int a[], int dim){

    int temp=a[dim-1];      // prende l'ultimo valore
    
    for(int i=dim-1; i>0; i--){

        a[i]=a[i-1];
    }

    a[0]=temp;              // e lo mette in testa 
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}

/*
void shift(int a[], int dim){

    int temp= a[dim-1];

    for(int i=0; i<dim-1; i++){

        a[i+1]=a[i];      COSI' DIVENTANO TUTTI UGUALI....si deve fare al contrario
    }

    a[0]=temp;  
}

*/