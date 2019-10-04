/*
cardinalita di un insieme I
#I e' il numero degli elementi di I se I e' un insieme finito 

es: #{0,1,2} = 3
es #{a,b} = 2 

cioe' il numero degli elementi */

// Vogliamo controllare che nell'array a, esista un elemento che compare esattamente 3 volte
// es a{0,1,5,1,1,5} -> TRUE -> 1
// es a{2,1,5,1,1,1} -> FALSE -> 0

// (∃ i ∈ [0,dim).
//                  #{ j| j ∈ [0,dim) and a[j]=a[i]} =3)


#include <stdio.h>

int conta(int el, int a[], int dim);
int esattamente3(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[5];

    read(a,5);

    if(esattamente3(a,5)){
        printf("\nSi ci sta\n");
    }
    else{
        printf("\nNope\n");
    }
}

int conta(int el, int a[], int dim){   // conta quante volte el compare in a

    int c=0;

    for(int i=0; i<dim; i++){

        if(a[i]==el){
            c++;
        }
    }

    return c;
}

int esattamente3(int a[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){

        if(conta(a[i], a, dim) ==3){
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
