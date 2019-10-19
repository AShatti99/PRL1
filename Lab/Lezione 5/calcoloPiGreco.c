/*
Il numero π pu`o essere calcolato in modo approssimato tramite la serie
Gregory-Leibniz che utilizza la seguente relazione:

π = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 - ...

Scrivere un programma che acquisica da tastiera un intero non negativo n
e restituisca l’approssimazione di π usando la serie di Gregory-Leibniz con
n termini, implementata tramite una funzione approx pi . Il risultato deve
essere stampato con esattamente 6 cifre decimali.
*/

#include <stdio.h>

float approxPi(int x);

int main(void){

    int n;

    scanf("%d",&n); // legge n

    printf("%f\n", approxPi(n));  // stampa la funzione
}

float approxPi(int x){

    float formula=0;  // inizializzo il conto a 0
    int divisore=1;   // inizializzo il divisore a 1 come nella formula in alto

    for(int i=0; i<x; i++){ // il conto va da 0 a x escluso

        if(i%2==0){   // se i e' pari fa la somma

            formula= formula + (float)4/divisore; 
        }
        else{        // senno' sottrae

            formula= formula - (float)4/divisore; // senza (float) non ricorderebbe i decimali
        }

        divisore+=2; // aumenta di 2 il divisore a ogni ciclo come nella formula in alto
    }

    return formula;
}
