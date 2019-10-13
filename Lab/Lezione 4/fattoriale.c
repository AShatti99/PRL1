/*
Scrivere un programma che legga da tastiera un numero intero x e stampi il
valore di x!.
Per x! si intende x fattoriale, ovvero x · (x − 1) · (x − 2)· · · 1.
*/

#include <stdio.h>

int main(void){

    int n;
    int fatt=1;

    scanf("%d",&n);

    while(n>1){
       fatt=fatt*n;   // fatt durante il primo ciclo sara' uguale a n
       n--;           // dopo n verra' diminuito a ogni ciclo
    }

    printf("%d\n",fatt);
}