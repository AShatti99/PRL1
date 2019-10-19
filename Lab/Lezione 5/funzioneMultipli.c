/*
Si realizzi un programma nel linguaggio C che, dati due interi N e M da standard input, 
facendo uso di una funzione di nome multipli, calcoli l’insieme degli interi appartenenti 
all’intervallo [1, N] che sono multipli di M. La chiamata a funzione dovr`a stampare tutti gli elementi 
dell’insieme ordinati in ordine crescente.
*/

#include <stdio.h>

int multipli(int fine, int v);

int main(void){

    int n;
    int m;

    scanf("%d",&n);     // legge n
    scanf("%d",&m);     // legge m

    multipli(n,m);      // chiama la funzione
}

int multipli(int fine, int v){

    for(int i=1; i<fine; i++){  // il ciclo va da 1 a fine, esclusi

        if(i%v==0){             // se i/v (cioe' m) da resto 0 allora e' un multiplo
            printf("%d\n",i);   // lo stampa
        }
    }
}

