/*
Si realizzi un programma che legga un array di 10 interi da standard input ed
applichi una funzione min azzera che calcoli il minimo di tutti gli elementi
e azzeri tutti gli elementi in posizione dispari. Fare attenzione all’ordine in
cui eseguire le operazioni. Si utilizzi l’aritmetica dei puntatori per scorrere
l’array, cercando di scorrerlo una sola volta.
Si stampi a video il contenuto dell’array e il minimo trovato.
*/

#include <stdio.h>
#define SIZE 10

void read(int *a, int dim);
void minAzzera(int *a, int dim);

int main(void){

    int a[SIZE];

    read(a,SIZE);                   
    
    minAzzera(a,SIZE);
}

void minAzzera(int *a, int dim){

    int *p;
    p=&a[0];

    int min=a[0];

    for(int i=0; i<dim; i++){

        if(min>p[i]){
            min=p[i];
        }
        if(i%2!=0){
            p[i]=0;
        }

        printf("%d\n",p[i]);
        if(i==dim-1){
            printf("%d\n",min);
        }
    }
}

void read(int a[], int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}