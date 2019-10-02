// dato un array a di dimensione 'dim' controllo la verita' della formula seguente:
// ∃ i ∈ [1, dim-1]. (sommatoria di j che va da 0 a i-1 di a[j]) = 
//                                                   (sommatoria di j che va da i+1 a dim-1 di a[j])
//                                   (sono due "j" diversi)

/* es: a {-2, 2, 3, 5, 3} -> True (Gli elementi che precedono 5: -2+2+3= 3 l'elemento dopo 5: 3= 3)
l'elemento non puo' essere ne' il primo ne' l'ultimo perche' deve avere un valore che precede e segue 

es: a{-2, 2, 4, 5, 3} -> False */

#include <stdio.h>

int sum(int a[], int inizio, int fine); 
int esiste(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    if(esiste(a,5)){
        printf("\nSi, esiste\n");
    }
    else{
        printf("\nNo, non esiste\n");
    }

}

int sum(int a[], int inizio, int fine){ // deve restituire la somma degli elementi di a con indici
    int s=0;                            // nell'intervallo [inizio,fine) 

    for(int i=inizio; i<fine; i++){
        s=s+a[i];
    }

    return s;
}

int esiste(int a[], int dim){

    int i=1;
    int trovato=0;

    while(i<dim-1 && !trovato){

    //  printf("\n%d==%d\n",sum(a,0,i),sum(a,i+1,dim));

        if(sum(a,0,i)==sum(a,i+1,dim)){  // il primo sum fa la somma da 0 a i
            trovato=1;                   // il secondo sum fa la somma da i+1 e dim 
        }                                // (quindi ci sta un valore in mezzo a i e i+1)
        else{
            i++;
        }
    }

    return trovato;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}