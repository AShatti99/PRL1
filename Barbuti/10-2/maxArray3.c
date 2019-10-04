// vogliamo due risultati: il valore massimo e il suo indice (CON PROCEDURA)
// es: {7, -2, 10, -3, -4, 2} -> il massimo e' 10 e il suo indice e' 2

#include <stdio.h>

void max(int a[], int dim, int *m, int *im);
void read(int a[], int dim);

int main(void){

    int a[5];
    int m;   // il massimo valore
    int im;  // il suo indice

    read(a,5);

    max(a, 5, &m, &im);  // &m e &im procedure che modificano le variabili

    printf("\nMax: %d \nIndice: %d\n",m,im);
}

void max(int a[], int dim, int *m, int *im){

    *m=a[0];
    *im=0;

    for(int i=1; i<dim; i++){

        if(a[i]>*m){

            *m=a[i];
            *im=i;
        }
    }
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}

