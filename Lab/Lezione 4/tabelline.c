/*
Scrivere un programma che, preso in ingresso un numero intero x, stampi
(con un numero per riga) la Tabellina di x (partendo da x ∗ 1 e terminando
con x ∗ 10).
*/

#include <stdio.h>

int main(void){

    int n;

    scanf("%d",&n);  // legge il numero

    for(int i=1; i<=10; i++){

        printf("%d\n",n*i);  // stampa n moltiplicato ad i ad ogni ciclo
    }
}