// tutti gli elementi di a compaiono esattamente 3 volte

// (∀ i ∈ [0,dim).
//                  #{ j| j ∈ [0,dim) and a[j]=a[i]} =3)

#include <stdio.h>

int conta(int el, int a[], int dim);
int esattamente3(int a[], int dim);
void read(int a[], int dim);

int main(void){

    int a[6];

    read(a,6);

    if(esattamente3(a,6)){
        printf("Si ci sta\n");
    }
    else{
        printf("Nope\n");
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
    int tuttOK=1;

    while(i<dim && tuttOK){

        if(conta(a[i],a,dim) ==3){  // !=3 pero' cambi i rami di if e else
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
}