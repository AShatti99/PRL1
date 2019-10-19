/*
Si realizzi un programma nel linguaggio C che legga da input un intero n ed
un floating point x > 0 e, utilizzando una funzione sum pow calcoli la somma
delle potenze di x, da 0 ad n (ovvero, il valore s = x^0+x^1+x^2+...+ x^n.
Il valore restituito dalla funzione deve essere stampato sullo standard output.
Il risultato deve essere stampato con esattamente due cifre decimali.
*/

#include <stdio.h>

float sommaPow(int fine, float valore);

int main(void){

    int n;
    float x;

    scanf("%d",&n);  // legge n
    scanf("%f",&x);  // legge x

    printf("%.2f\n",sommaPow(n,x));  // stampa la funzione con due cifre decimali
}

float sommaPow(int fine, float valore){
    
    float m=valore;   // memorizza il valore
    float somma=m+1;  // somma viene inizializzata con gia' memorizzato x^0+x^1

    for(int i=2; i<=fine; i++){ // va da x^2 a x^n

        valore=valore*m;     // il valore di m non cambia mai 
        somma=somma+valore;  // memorizza l'elemento "valore" temporaneo
    }

    return somma; 
}