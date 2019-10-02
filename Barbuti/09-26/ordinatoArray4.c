#include <stdio.h>

int ordinato(int a[], int dim);  // a[dim] NON ESISTE. L'ultimo elemento di a ha indice (dim-1)
void read(int a[], int dim);

int main(void){

    int ord;

    int a[2];
    int b[3];

    read(a,2);

    puts("");

    read(b,3);

    ord=ordinato(a,2);           
    printf("ord: %d\n",ord);

    ord=ordinato(b,3);
    printf("ord: %d\n",ord);
}

int ordinato(int a[], int dim){

    int i=0;
    int tuttOK=1;

    while(i<dim-1 && tuttOK){  // basta scrivere cosi' senza scrivere tuttOK==1

        if(a[i] < a[i+1]){        // se la condizione dell'if e' giusta incrementa i
            i=i+1;
        }
        else{
            tuttOK=0;             // se non e' rispettata, la condizone dell'if diventa falsa
        }                         // esce dal while
    }

    return tuttOK;
}

void read(int a[],int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}