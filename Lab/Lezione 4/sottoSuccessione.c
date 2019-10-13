/*
Scrivere un programma che legga da tastiera una sequenza di 10 interi scrivendola in un array, 
quindi stampi (uno per linea, e nello stesso ordine in cui sono stati immessi) i valori della sequenza 
che rispettano una di queste due proprieta:
1. Siano positivi e pari, oppure
2. Siano negativi e succeduti da un valore positivo.
Note: lo zero e' considerato un valore positivo.
*/

#include <stdio.h>

int main(void){

    int a[10];

    for(int i=0; i<10; i++){    // carico l'array

        scanf("%d",&a[i]);
    }

    for(int j=0; j<9; j++){     // verifico l'array fino al penultimo numero

        if(a[j]>=0 && a[j]%2==0){    // se a e' positivo e pari, stampa

            printf("%d\n",a[j]);
        }

        else if(a[j]<0 && a[j+1]>=0){  // se a e' negativo e se a[j+1] e' positivo, stampa

            printf("%d\n",a[j]);
        }
    } 

    if(a[9]>=0 && a[9]%2==0){     // l'ultimo numero si fa con un controllo a parte

        printf("%d\n",a[9]);      // se l'ultimo numero e' negativo e a[10] (valore non inizializzato)
    }                             // e' positivo lo stampa, ma non dovrebbe!
}                                 // quindi si controlla solo se e' pari e positivo
