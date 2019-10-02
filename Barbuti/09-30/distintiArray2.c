// dato un array controllare che tutti gli elementi sono distinti
// con un unica funzione 

#include <stdio.h>

int distinti(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    if(distinti(a,5)){
        printf("\nGli elementi sono tutti distinti\n");
    }
    else{
        printf("\nGli elementi NON sono distinti\n");
    }

}

int distinti(int a[], int dim){

    int i=0;
    int tuttOK=1;

    while(i<dim-1 && tuttOK){

        int j=i+1;
        int trovato=0;

        while(j<dim && !trovato){

            if(a[j]==a[i]){   // controlla se a[i] e' uguale a tutti gli altri valori di a[j]

                trovato=1;     // poi incrementa a[i]
            }
            else{
                j++;
            }
        }

        if(trovato){
            tuttOK=0;
        }
        else{
            i++;
        }
    }

    return tuttOK;
} 

void read(int a[],int dim){
 
    puts("Inserisci elementi dell'array");
 
    for(int i=0; i<dim; i++){
 
        scanf("%d",&a[i]);
    }
}