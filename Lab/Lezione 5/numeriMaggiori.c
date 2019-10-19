/*
Scrivere un programma che acquisisca da tastiera un intero x e un array
di 5 altri interi e restituisca il numeri di elementi maggiori di x presenti
nell’array.Il programma deve usare una funzione count larger che prende
come parametri x, l’array e la lunghezza dell’array e restituisce il numero
di elementi maggiori di x.
*/

#include <stdio.h>

void read(int a[], int dim);
int countLarger(int n, int a[], int dim);

int main(void){
    
    int x;
    int a[5];

    scanf("%d",&x);  // legge x
    read(a,5);  // chiama la funzione che carichera' l'array

    printf("%d\n",countLarger(x, a, 5)); // stampa la funzione
}

void read(int a[], int dim){  // carico l'array

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}

int countLarger(int n, int a[], int dim){

    int conta=0;    // serve per contare quanti numeri > n ci sono

    for(int i=0; i<dim; i++){

        if(a[i]>n){ // se trova un numero dell'array maggiore di n fa +1

            conta++;
        }
    }

    return conta;  // restituisce conta
}
