#include <stdio.h>

void swap(int *n, int *m);

int main(void){
    
    int x=5;
    int y=10;

    swap(&x,&y);

    printf("x:%d \ny: %d\n",x,y); // x=10; y=5
}

void swap(int *n,int *m){
    int temp=*n;       // temp diventa 5
    *n=*m;             // il valore puntato da n diventa, il valore puntato da m, cioe' 10
    *m=temp;           // il valore puntato da m diventa temp cioe' 5 
}
