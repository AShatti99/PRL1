/*
Si realizzi un programma che legga un array di 7 interi da standard input ed
applichi una funzione con prototipo
void primoultimopari(int arr[], int dim, int* primaocc,int* ultimaocc);
che ricevuto un array di interi, restituisca la posizione della prima e dell’ ultima occorrenza 
di un elemento pari nell’array, se esiste almeno un’occorrenza di un numero pari, altrimenti -1. 
Si utilizzi l’aritmetica dei puntatori e si scorra l’array una sola volta.
Si stampi a video la prima e l’ultima posizione dell’elemento pari trovata.
*/

#include <stdio.h>
#define SIZE 7

void primoUltimoPari(int arr[], int dim, int *primaOcc, int *ultimaOcc);
void read(int arr[], int dim);

int main(void){

    int a[SIZE];
    int primo, ultimo;

    read(a,SIZE);    // carico l'array
    
    primoUltimoPari(a,SIZE,&primo,&ultimo);  // chiamo la funzione

    printf("%d %d\n", primo, ultimo);  // stampo i due valori
}

void primoUltimoPari(int arr[], int dim, int *primaOcc, int *ultimaOcc){

    int c=0;            // mi serve per contare le occorenze, utile per trovare la primaOccorenza
    *primaOcc=-1;       // inizializzo a -1 nel caso non ci sia nessun numero pari
    *ultimaOcc=-1;

    for(int i=0; i<dim; i++){

        if(arr[i]%2==0){  // se il numero e' pari entra dentro l'if

            c++;

            if(c==1){    // se e' il primo numero pari che incontra assegna a *primaOcc il valore di i
                *primaOcc=i;
            }

            *ultimaOcc=i; // ogni volta che entra dentro il primo if cambia il valore di *ultimaOcc
        }                 // perche' ha trovato un nuovo ultimo numero pari
    }  

}

void read(int arr[], int dim){

    for(int i=0; i<dim; i++){
        
        scanf("%d",&arr[i]);
    }
}