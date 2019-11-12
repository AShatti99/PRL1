/*
Si realizzi un programma che legga 3 interi da standard input ed applichi
la funzione a 3 argomenti ordered swap(·,·,·) alle 3 variabili in cui sono
stati memorizzati i 3 valori. I valori letti devono essere passati alla funzione
nell’ordine in cui vengono acquisiti da tastiera.
Si implementi la funzione ordered swap, che scambia il contenuto delle 3
variabili di input in modo che la variabile corrispondente al primo argomento
contenga l’intero minore, la seconda variabile contenga l’intero mediano e la
terza contenga l’intero di valore maggiore.
Si stampi a video il contenuto delle 3 variabili all’uscita dall’esecuzione
della funzione.
*/

#include <stdio.h>

void orderedSwap(int *a, int *b, int *c);
void swap(int *x, int *y);

int main(void){

    int a, b, c;

    scanf("%d%d%d",&a,&b,&c);

    orderedSwap(&a,&b,&c);

    printf("%d \n%d \n%d \n",a, b, c);

}

void orderedSwap(int *a, int *b, int *c){

    if(*a>*b){            // se *a>*b scambia i due valori chiamando la funzione swap

        swap(a,b);
    }
    if(*b>*c){

        swap(b,c);
    }
    if(*a>*b){

        swap(a,b);
    }
}

void swap(int *x, int *y){   // scambia i due valori

    int temp=*x;
    
    *x=*y;
    *y=temp;
}