/*
Scrivere un programma che legga da tastiera 10 interi, li scriva in un array
A, e stampi l’indice i del primo elemento che verifica la seguente condizione:
A[i] = A[i + 1] − A[i − 1]
oppure stampi -1 nel caso in cui nessun elemento verifichi la suddetta condizione.
*/

#include <stdio.h>

int main(void){

    int a[10];         //inizializzo l'array
    int i=0;           // dichiaro l'indice del while
    int condizione=0;  // suppongo che la condizione non sia verificata

    for(int j=0; j<10; j++){  // carico l'array

        scanf("%d",&a[j]);
    }

    while(i<10 && !condizione){    // continua il ciclo fino a che i=10 o quando la condizione=1

        if(a[i]==a[i+1]-a[i-1]){   // verifica la condizione 
            printf("%d\n",i);      // se lo trova, stampa l'indice ed esce dal while
            condizione=1;
        }
        else{
            i++;                  // se la condizione non e' verificata, continua il ciclo
        }
    }

    if(!condizione){            // se per tutto il while rimane !condizione, stampa -1
        printf("-1\n");
    }
}