// Cercare il max e il min di un array
// dato che una funzione non puo' restituire 2 valori, usiamo una procedura che modifica gli indirizzi
// che gli vengono passati

#include <stdio.h>

void maxMin(int a[], int dim, int *max, int *min);
void read(int a[], int dim);

int main(void){

    int a[5];
    int max;
    int min;

    read(a, 5);
    maxMin(a, 5, &max, &min);   // chiama la funzione e determina il max e il min

    printf("\nMax: %d \nMin: %d\n",max,min);
}

void maxMin(int a[], int dim, int *max, int *min){

    *max=a[0];
    *min=a[0];

    for(int i=0; i<dim; i++){

        if(a[i]>*max){
            *max=a[i];
        }
        else if(a[i]<*min){
            *min=a[i];
        }
    }
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}
