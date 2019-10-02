#include <stdio.h>

int main (void){

    int n;
    int f=1;

    printf("Inserisci numero: ");
    scanf("%d",&n);

    while(n>1){

        f=f*n;       // a ogni ciclo  f moltiplica n e decrementa n
        n=n-1;
    }

    printf("Il fattoriale e': %d\n",f);
}
