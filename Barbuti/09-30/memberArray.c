// funzione che controlla se un valore compare o meno in un array

// supponiamo di dover cercare un elemento 'el' in un array 'a' di dimensione 'dim' 

// ( ∃ i ∈ [0,dim) . a[i]=el)

#include <stdio.h>

int member(int el, int a[], int dim);
void read(int a[], int dim);

int main(void){

    int elemento;              //  elemento da trovare nell'array

    int a[3];              

    printf("Inserisci elemento da trovare: ");
    scanf("%d",&elemento);

    read(a,3);

    if(member(elemento,a,3)){      // chiamata di member
        printf("\nElemento %d compare nell'array\n",elemento);       // se compare
    }
    else{
        printf("\nElemento %d NON compare nell'array\n",elemento);   // se non compare
    }
}

int member(int el, int a[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){    // !trovato e' come dire trovato==0

        if(a[i]==el){     // l'importanza del nome delle variabili, deve essere significativo
            trovato=1;    // per il lettore. Non per il C
        }
        else{
            i++;
        }
    }    

    return trovato;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}