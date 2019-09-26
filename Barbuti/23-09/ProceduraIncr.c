#include <stdio.h>

void incr(int *n);

int main(void){

    int x=5;

    incr(&x);

    printf("x: %d\n",x);   // x=6;
}

void incr(int *n){

    *n=*n+1;
} 


/* Scrivere cosi' NON FUNZIONA 

void incr(int n);

int main(void){

    int x=5;
    incr(x);

    printf("x: %d\n",x);
}

void incr(int n){

    n=n+1;
}

*/
