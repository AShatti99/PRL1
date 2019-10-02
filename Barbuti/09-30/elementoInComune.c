// dati due array, a e b, di dimensioni dim a e dim b respettivamente vogliamo scrivere una funzione
// che restituisce il valore di verita' delle seguenti formule: 
// ∃ i ∈ [0, dima). 
//                  (∃ j ∃ [0, dimb]. a[i]==b[j])
// cioe' esiste un elemento in a che esiste pure in b

#include <stdio.h>

int member(int el, int a[], int dim);
int esiste(int a[], int dima, int b[], int dimb);
void read(int a[], int dim);

int main(void){

    int a[5];
    int b[5];

    read(a,5);
    read(b,5);

    if(esiste(a,5,b,5)){
        printf("\nSi, esiste\n");
    }
    else{
        printf("\nNo, non esiste\n");
    }

}

int member(int el, int a[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){

        if(el==a[i]){     
            trovato=1;    
        }
        else{
            i++;
        }
    }    

    return trovato;
}

int esiste(int a[], int dima, int b[], int dimb){

    int i=0;
    int trovato=0;

    while(i<dima && !trovato){        // i scorre gli elementi di a

        if(member(a[i], b, dimb)){    // member confronta a[i] con gli elementi di b uno a uno
            trovato=1;
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
    
    puts("");
}