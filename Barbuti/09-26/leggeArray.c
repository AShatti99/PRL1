// Procedura che legge gli elementi di un array

#include <stdio.h>

void read(int a[], int dim);

int main(void){

    int a[5];
    int b[10];

    read(a,5);
    read(b,10);
}



void read(int a[], int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}