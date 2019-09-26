// Funzione che modifica il valore di una variabile e restituisce come risultato il suo vecchio valore

#include <stdio.h>

int swap(int *n, int *m);

int main(void){

    int x=5;
    int y=10;

    y=swap(&x,y);    // y = 5

    printf("x:%d \ny:%d\n",x,y);  // x=10
}

int swap(int *n, int *m){

    int temp=*n;    // temp diventa il valore puntato da n, cioe' 5
    *n=m;           // il valore puntato da n diventa 10

    return temp;
}
