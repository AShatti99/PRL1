#include <stdio.h>

int main(void){

    int *p; 
    *p=10;

    printf("p: %d\n",p);             // valore di p -> ln

    printf("*p: %d\n",*p);           // valore puntato da p -> 10

    printf("&p: %d\n",&p);           // l'indirizzo di memoria che contiene p -> lp
}