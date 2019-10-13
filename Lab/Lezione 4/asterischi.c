/*
Scrivere un programma che legga da tastiera un numero intero n e stampi n
asterischi sulla prima linea, n − 2 asterischi sulla seconda linea, n − 4 sulla
terza e cosi via, fino ad arrivare a stampare uno o due asterischi sull’ultima
linea.
*/

#include <stdio.h>

int main(void){

    int n;

    scanf("%d",&n);

    for(int i=n; i>0; i-=2){

        for(int j=0; j<i; j++){   // Lunghezza di i = numero di asterischi
            printf("*");
        }
        
        puts("");   // manda a capo
    }
} 
