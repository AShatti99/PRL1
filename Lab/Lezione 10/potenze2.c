/*
Scrivere una funzione ricorsiva Pot2 che dato un numero n intero positivo
calcoli e restituisca il numero F(n) definito dalle seguente relazione:
F(1) = 2
F(n) = 2F(n − 1) se n ≥ 2
Scrivere poi un programma che acquisisca da tastiera un numero intero
positivo n e stampi F(n) calcolato con la funzione Pot2.
*/

#include <stdio.h>

int rec (int n);

int main(void){

    int n;

    scanf("%d",&n);             // legge n

    n=rec(n);

    printf("%d\n", n);         // stampa n
}

int rec (int n){

    if(n==1){         // se n==1 finisce il ciclo

        return 2;
    }
    else{

        return 2 * rec(n-1);     // 2 * continua ciclo
    }
}