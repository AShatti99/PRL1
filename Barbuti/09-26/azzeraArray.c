// scrivere una procedura che azzera tutti gli elementi di un array di interi

#include <stdio.h> 

void azzera(int a[], int dim);  // puoi scrivere int *a ma non e' chiaro

int main(void){

    int a[2];
    int b[3];

    azzera(a,2);
    azzera(b,3);

}

void azzera(int a[], int dim){

    for(int i=0; i<dim; i++){

        a[i]=0;
    }
}
