// si scriva una funzione C che, dati due array a e b, entrambi di dimensione dim (cioe' stessa 
// dimensione), restituisca il valore di verita' della formula seguente

// (∀ i ∈ [1,dim). 
//                b[i]= #{j | j ∈ [0,i) and a[j]>=0})

/* ogni elemento b deve essere uguale al numero degli elementi di a che vanno da 0 a dim-1 e
che sono maggiori o uguali a 0
 
es a{1, -3, 2, -4, 1}
finche' la formula sia verificata occorre che, per esempio, l'indice 1 di b deve essere uguale
al numero di elementi di a che vanno dagli indici 0 a 1-1 (cioe' da 0 a 0) e che sono >= di zero 
Quanti elementi ci sono dall'intervallo 0 a 0 che sono >= di zero? 1
Quanti elementi ci sono dall'intervallo 0 a 1 che sono >= di zero? 1 
Quanti elementi ci sono dall'intervallo 0 a 2 che sono >= di zero? 2
Quanti elementi ci sono dall'intervallo 0 a 3 che sono >= di zero? 2

l'elemento di b di indice 0 puo' essere qualsiasi: b{10, 1, 1, 2, 2}
*/


#include <stdio.h>

int contaMag(int a[], int fine);
int formula(int a[], int b[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];
    int b[5];

    read(a,5);
    read(b,5);

    if(formula(a,b,5)){
        printf("\nCondizione verificata\n");
    }
    else{
        printf("\nCondizione NON verificata\n");
    }

}

int contaMag(int a[], int fine){ // numero degli elementi di a con indice nell'intervallo [0, fine) 
// che sono maggiore o uguali a 0

    int c=0;

    for(int i=0; i<fine;i++){

        if(a[i]>=0){
            c++;
        }
    } 

    return c;     
}

int formula(int a[], int b[], int dim){

    int i=1;
    int tuttOK=1;

    while(i<dim && tuttOK){

        if(b[i]==contaMag(a,i)){

            i++;
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

    puts("");
}
