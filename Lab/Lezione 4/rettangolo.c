/*
Scrivere un programma che legga da tastiera due interi h e l e stampi un
rettangolo fatto da asterischi, con altezza h e lunghezza l .
*/

#include <stdio.h>

int main(void){

    int h;
    int l;

    scanf("%d",&h);    // legge l'altezza
    scanf("%d",&l);    // legge la lunghezza

    for(int i=0; i<l; i++){   // stampa la prima linea di *
        printf("*");
    }

    puts("");                 // manda a capo dopo la prima linea di *

    for(int w=0; w<h-2; w++){  // stampa l'altezza-2 perche' 2 righe di asterischi ci sono/saranno gia'

        for(int j=0; j<l; j++){  // stampa la riga di lunghezza l

            if(j==0 || j==l-1){  
                printf("*");     // stampa * se j=0 o se j e' all'ultimo ciclo
            }
            else{
                printf(" ");     // senno' stampa uno spazio orizzontale
            }
        }

        puts("");   // manda a capo dopo ogni riga
    }

    if(h>1){    // se h=1 mi deve stampare solo un * non due *

        for(int i=0; i<l; i++){   // stampa l'ultima riga di * nel caso sia h>1
            printf("*");
        }

        puts("");   // manda a capo tutto
    }
} 