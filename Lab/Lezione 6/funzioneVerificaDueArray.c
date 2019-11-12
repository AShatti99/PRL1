/*
Si realizzi un programma che legga due array di 3 interi ciascuno a e b da
standard input ed applichi una funzione che verifichi che esiste almeno un
elemento di a minore di tutti gli elementi di b.
Si utilizzi l’aritmetica dei puntatori e si cerchi di scrivere una funzione che si
fermi il prima possibile.
Si stampi a video il risultato della verifica (TRUE o FALSE).
*/

#include <stdio.h>
#define SIZE 3

int minore(int el, int a[], int dim);
int formula(int a[], int b[], int dim);
void read(int a[], int dim);

int main(void){

    int a[SIZE], b[SIZE];

    read(a,SIZE);           // carico l'array a
    read(b,SIZE);           // carico l'array b

    if(formula(a,b,SIZE)){  // se la formula e' vera mi stampa TRUE
        puts("TRUE");
    }
    else{
        puts("FALSE");      // altrimenti FALSE
    }
}

int minore(int el, int b[], int dim){

    int i=0;
    int OK=1;

    while(i<dim && OK){

        if(el<b[i]){   // se el e' minore di b[i] continua l'iterazione
            i++;
        }
        else{          // altrimenti esce e si prova con l'elemento successivo di formula
            OK=0;
        }
    }

    return OK;
}

int formula(int a[], int b[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){

        if(minore(a[i],b,dim)){ // se trova un valore esce dal while
            trovato=1;
        }
        else{
            i++;
        }
    }

    return trovato;
}

void read(int a[], int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}