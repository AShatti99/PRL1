/*
Scrivere un programma che legga da tastiera una sequenza di 10 interi, e
stampi la stessa sequenza con ordine invertito, dividendo per 2 gli elementi
pari della sequenza.
*/

#include <stdio.h>

int main(void){

    int a[10];

    for(int i=0; i<10; i++){  // carico l'array

        scanf("%d",&a[i]);
    }

    for(int i=9; i>=0; i--){  // contollo ogni elemento

        if(a[i]%2==0){        // se l'elemento e' pari, lo dimezzo
            a[i]/=2;
        }

        printf("%d\n", a[i]);  // stampo l'elemento
    }
}