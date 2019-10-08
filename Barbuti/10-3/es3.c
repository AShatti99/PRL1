// restituisca il valore di verita' della formula:
// ∃ i ∈ [0,dim).
//              #{k| k ∈ [0,i) and a[k]<0}
//              =
//              #{s| s ∈ (i,dim) and a[s]<0}

// Se esiste un indice tale che tra gli elementi che precedono e gli elementi che seguono
// c'e' lo stesso numero di elementi che sono minori di 0.
// basta che ne esiste uno

// leggi sotto l'esempio

#include <stdio.h>

int contaNeg(int a[], int inizio, int fine);
int formula(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    if(formula(a,5)){
        printf("\nCondizione verificata\n");
    }
    else{
        printf("\nCondizione NON verificata\n");
    }
}

int contaNeg(int a[], int inizio, int fine){

    int c=0;

    for(int i=inizio; i<fine; i++){
        
        if(a[i]<0){
            c++;

        }
    }

    return c;
}

int formula(int a[], int dim){

    int i=0;
    int trovato=0; 

    while(i<dim && !trovato){
        
        if(contaNeg(a,0,i)==contaNeg(a,i+1,dim)){
            trovato=1;
            
        }
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

/*
Se mando in input [1, -2, 3, 4, 5]
[ ] 1 [ -2 3 4 5 ] => 0 == 1 => false
[ 1 ] -2 [ 3 4 5 ] => 0 == 0 => TRUE
[ 1 -2 ] 3 [ 4 5 ] => 1 == 0 => false
[ 1 -2 3 ] 4 [ 5 ] => 1 == 0 => false
[ 1 -2 3 4 ] 5 [ ] => 1 == 0 => false 
*/