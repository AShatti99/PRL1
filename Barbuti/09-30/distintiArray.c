// dato un array controllare che tutti gli elementi sono distinti

// (∀ i ∈ [0,dim-1) . 
//                    ¬(∃ j ∃ [i+1, dim) . a[j] == a[i])) 

#include <stdio.h>

int member(int el, int a[], int inizio, int fine);
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

int member(int el, int a[], int inizio, int fine){

    int i=inizio;
    int trovato=0;

    while(i<fine && !trovato){

        if(el==a[i]){
            trovato=1;
        }
        else{
            i++;
        }
    }

    return trovato;
}

int distinti(int a[], int dim){

    int i=0;
    int tuttOK=1;

    while(i<dim-1 && tuttOK){

        if(member(a[i],a,i+1,dim)){
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
