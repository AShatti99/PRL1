#include <stdio.h>

void sum(int *n, int m);    // funziona anche con (int *n, int *m) MA NON BISOGNA PROGRAMMARE COSI'

int main(void){

    int x=5;
    int y=10;

    sum(&x,y);             // e con sum(&x,&y)                        

    printf("%d\n",x);   // stampa 15  
}

void sum(int *n, int m){

    *n=*n+m;   // il valore puntato da n (cioe' 5) + m
}
