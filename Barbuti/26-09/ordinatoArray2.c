// variante ERRATA

#include <stdio.h>

int ordinato(int a[], int dim);  // a[dim] NON ESISTE. L'ultimo elemento di a ha indice (dim-1)
void read(int a[], int dim);

int main(void){

    int ord;

    int a[5];
    int b[10];

    read(a,5);
    read(b,10);

    ord=ordinato(a,5);
}

int ordinato(int a[], int dim){

    int tuttOK=1;

    for(int i=0; i<dim-1; i++){
        
        if(a[i] >= a[i+1]){
            tuttOK=0;
        }
        else{                  // NON VA BENE PERCHE' SE TROVA COME PENULTIMO ELEMENTO E ULTIMO
            tuttOK=1;          // 4 e 5, ti restituisce 1 anche se i NUMERI PRIMA magari non 
        }                      // erano crescenti
    }

    return tuttOK;
}

void read(int a[],int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}