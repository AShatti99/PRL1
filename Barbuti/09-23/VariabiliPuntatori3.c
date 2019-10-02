/* Dichiarazione di una variabile puntatore: 
tipo * nome; 
int * p 
Il valore di p non sara' in memoria, non sara' un valore intero, ma sara' l'indirizzo di memoria di 
un valore intero 

qual e' il valore dell'espressione:
p  -> valore di p
*p -> valore puntato da p
&p -> l'indirizzo di memoria che contiene il valore p */

#include <stdio.h>

int main(void){

    int x=5;
    printf("x: %d\n\n",x);   // x= 5

    int *p;

    p=&x;
    *p=*p+1;

    printf("*p: %d\n",*p);   // il valore puntato da p (cioe' x) + 1 
    printf("x: %d\n",x);     // x= 6
    printf("p: %d\n",p);     // l'indirizzo di memoria di x
}