// formula da verificare:
// (∃ i ∈ [0, dim). 
//               (∃ j ∈ (i, dim) .
//                                         (# {k | k ∈ [0.dim) and a[i]==a[k]}
//                                          >
//                                          #{s | s ∈ [0, dim) and a[j]==a[s]}
//                                          >=
//                                          2 )))

// A > B && B >= C

// Esistono due elementi i e j tale che il numero di occorrenze di a[i] e' maggiore 
// del numero di occorrenze di a[j] e entrambi sono maggiori o uguali a 2

// leggi sotto gli esempi

#include <stdio.h>

int conta(int el, int a[], int dim);
int formula(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    if(formula(a,5)){
        printf("\nCondizione Verificata\n");
    }
    else{
        printf("\nCondizione NON verificata\n");
    }
}

int conta(int el, int a[], int dim){

    int c=0;

    for(int i=0; i<dim; i++){

        if(a[i]==el){
            c++;
        }
    }

    return c;
}

int formula(int a[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){

        int j=i+1;
        
        while(j<dim && !trovato){

            if(conta(a[j],a,dim)>=2 && conta(a[i],a,dim)>conta(a[j],a,dim)){

                trovato=1;
            }
            else{

                j++;
            }
        }

        i++;
    }

    return trovato;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}

/*
ES 1: [1, 2, 1, 1, 2]
Abbiamo un indice i=0 (il numero 1) e un indice j=1 (il numero 2). Il numero 2 occore 2 volte 
mentre il numero 1 occore 3 volte. Entrambi sono maggiori o uguali a 2. Quindi restituisce TRUE

ES 2: [2, 2, 1, 1, 1]
Non abbiamo nessun indice i > j tale per cui il numero di occorrenze di a[i] 
supera il numero di occorrenze di a[j]. Il massimo che possiamo fare è prendere i = 2 (il numero 1) 
e j = 3 (il numero 1) che appaiono la stessa quantità di volte. Restituisce falso.*/