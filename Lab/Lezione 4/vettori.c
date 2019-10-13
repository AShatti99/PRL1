/*
Scrivere un programma che legga da tastiera due vettori interi di dimensione
5 (10 numeri interi in totale) e stampi prima i due vettori, poi la loro somma.
*/

#include <stdio.h>

int main(void){

    int a[5];
    int b[5];

    for(int i=0; i<5; i++){  // carico l'array a

        scanf("%d",&a[i]);
    }

    for(int i=0; i<5; i++){  // carico l'array b

        scanf("%d",&b[i]);
    }
    
    for(int i=0; i<5; i++){

        if(i==0){                     // se i=0 stampa [n
            printf("[%d,",a[i]);
        }
        else if(i==4){                // se i=4 stampa n]
            printf("%d]",a[i]);
        }
        else{
            printf("%d,",a[i]);    // se i e' qualsiasi altro numero, lo stampa seguito da una virgola
        }
    }

    puts("");

    for(int i=0; i<5; i++){

        if(i==0){
            printf("[%d,",b[i]);
        }
        else if(i==4){
            printf("%d]",b[i]);
        }
        else{
            printf("%d,",b[i]);
        }
    }

    puts("");

    for(int i=0; i<5; i++){

        if(i==0){
            printf("[%d,",a[i]+b[i]);  
        }
        else if(i==4){
            printf("%d]",a[i]+b[i]);
        }
        else{
            printf("%d,",a[i]+b[i]);
        }
    }

    puts("");
}