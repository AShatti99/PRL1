// (∀ i ∈ [0, dim-1).
//                  (∀ j ∈ [i+1, dim). a[i] ≠ b[i]))


#include <stdio.h>

int diversi(int el, int a[], int inizio, int fine);
int distinti(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    if(distinti(a,5)){
        printf("\nGli elementi sono tutti distinti\n");
    }
    else{
        printf("\nGli elementi NON sono tutti distinti\n");
    }

}

int diversi(int el, int a[], int inizio, int fine){  // ha la stessa funzione della funzione member

    int i=inizio;       // qui si impone che siano tutti diversi gli elementi, se si trova uno uguale
    int tuttOK=1;       // tuttOK diventa 0 ed esce dal while

    while(i<fine && tuttOK){

        if(el==a[i]){   //       if(a[i]!=el){
            tuttOK=0;   //           i++
        }               //       } else{
        else{           //          tuttOK=0;
            i++;        //       }
        }               // 
    }

    return tuttOK;
}

int distinti(int a[], int dim){

    int i=0;           // "i" e "tuttOK" sono variabili differenti rispetto alla funzione diversi. 
    int tuttOK=1;      // se tuttOK e' 1 vuoldire che sono tutti diversi   


    while(i<dim-1 && tuttOK){

        if(diversi(a[i], a, i+1, dim)){  // qui i rami dell'if ed else sono diversi rispetto 
            i++;                         // al programma distintiArray perche' stiamo facendo l'opposto
        }
        else{
            tuttOK=0;
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