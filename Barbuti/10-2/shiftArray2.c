// Invece di fare lo shift circolare verso destra di una posizione, facciamolo di n posizioni

#include <stdio.h>

void shiftN(int n, int a[], int dim);
void shift(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];
    int n;              // il numero di posizioni da shiftare

    read(a, 5);         // array in input

    printf("Di quanto vuoi shiftare l'array: ");
    scanf("%d",&n);

    shiftN(n,a,5);      // applica la procedura              

    puts("\nDopo lo shift circolare verso destra:");

    for(int i=0; i<5; i++){    
        printf("%d\n",a[i]);
    }
}

void shiftN(int n, int a[], int dim){

    for(int i=0; i<n; i++){    // applica n volte lo shift 
        shift(a,dim);
    }
}

void shift(int a[], int dim){

    int temp=a[dim-1];      // prende l'ultimo valore
    
    for(int i=dim-1; i>0; i--){

        a[i]=a[i-1];
    }

    a[0]=temp;              // e lo mette in testa 
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}