// Dati due array a e b di dimensione dim e dimb rispettivamente. 
// Tutti gli elementi di a compaiono anche in b

// (∀ i ∈ [0,dima).
//                  (∃ j ∃ [0, dimb) . a[i]=b[j]

#include <stdio.h>

int member(int el, int a[], int dim);
int tuttiInB(int a[], int dima, int b[], int dimb);
void read(int a[], int dim);

int main(void){

    int a[5];
    int b[5];

    read(a,5);
    read(b,5);   

    if(tuttiInB(a, 5, b, 5)){
        printf("\nSi, tutti gli elementi compaiono in b\n");
    }
    else{
        printf("\nNope\n");
    }


}

int member(int el, int a[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){

        if(el==a[i]){
            trovato=1;
        }
        else{
            i++;
        }
    }

    return trovato;
}

int tuttiInB(int a[], int dima, int b[], int dimb){

    int i=0;
    int tuttOK=1;

    while(i<dima && tuttOK){        // scorre gli elementi di a

        if(member(a[i],b,dimb)){    // if(!member(a[i],b,dimb)){ 
            i++;                    //      tuttOK=0;
        }                           // }
        else{                       // else {
            tuttOK=0;               //      i++;
        }                           // }
    }

    return tuttOK;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}
