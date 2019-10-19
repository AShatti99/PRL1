/*
Si realizzi un programma in C che acquisisca da tastiera due numeri interi
N e M e utilizzi due funzioni per calcolare il Minimo Comune Multiplo e il
Massimo Comune Divisore tra N e M. Il programma stampa sullo standard
output prima il MCD(N,M) e poi il mcm(N,M).
*/

#include <stdio.h>

int MCD(int n, int m);
int mcm(int n, int m);

int main(void){

    int x, y;

    scanf("%d%d",&x,&y);

    printf("%d\n",MCD(x,y));
    printf("%d\n",mcm(x,y));
}

int MCD(int n, int m){

    while(n!=m){         // esce dal while fino a quando n e m sono uguali

        if(n>m){
            n=n-m;
        }
        else{
            m=m-n;
        }
    }

    return n;           // stampare n o m e' indifferente, intanto saranno uguali
}

int mcm(int n, int m){

    return (n*m)/MCD(n,m);  // per proprieta' del mcm
}