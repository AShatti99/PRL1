/*
Si realizzi un programma nel linguaggio C che, data una sequenza di 10 interi da standard input, 
facendo uso di una funzione di nome media, calcoli la media aritmetica (reale) di tutti i valori 
diversi da zero e di segno uguale all’ultimo valore della sequenza. 
La media deve essere stampata con esattamente due cifre decimali.
Assunzione: l’ultimo elemento della sequenza e' sempre diverso da zero.
*/

#include <stdio.h>

void read(int a[], int dim);     
float media(int a[], int dim);

int main(void){

    int a[10];     // creo l'array

    read(a,10);    // chiamo la funzione che deve caricare l'array

    printf("%.2f\n",media(a,5)); // stampo la funzione media con due cifre decimali
}

void read(int a[], int dim){  // carico l'array

    for(int i=0; i<10; i++){

        scanf("%d",&a[i]);
    }
}

float media(int a[], int dim){

    int somma=0;   // per sommare i valori che rispettano le condizioni
    int c=0;       // conta quanti numeri sono passati

    if(a[9]>0){                             // se l'ultimo numero e' maggiore di 0 esegue questo ciclo

        for(int i=0; i<10; i++){

            if(a[i]>0){

                somma=somma+a[i]; 
                c++;
            }
        }
    }
    else{                                   // senno' questo ciclo

        for(int i=0; i<10; i++){

            if(a[i]<0){

                somma=somma+a[i];
                c++;
            }
        }
    }

    return (float)somma/c;  // (float) serve per eseguire la divisione con i decimali
}                           // nonostante sto facendo la divisione tra interi

