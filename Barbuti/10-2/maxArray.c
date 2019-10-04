// trovare il valore massimo di un array
// es a{-2, 3, 7, 12, -3} -> 12
// es b{-2, 12, 3, 5, 12} -> 12

// non ci sta nella formula ne' (∀) ne' (∃) ma deve restituire il valore massimo

#include <stdio.h>

int max(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    printf("Il valore max dell'array e': %d\n", max(a,5));

}

int max(int a[], int dim){

    int m=a[0];

    for(int i=0; i<dim; i++){

        if(a[i]>m){
            m=a[i];
        }
    }

    return m;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}
