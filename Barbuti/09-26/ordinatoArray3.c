//se incontro una coppia "fuori posto" mi posso fermare immediatamente

#include <stdio.h>

int ordinato(int a[], int dim);  // a[dim] NON ESISTE. L'ultimo elemento di a ha indice (dim-1)
void read(int a[], int dim);

int main(void){

    int ord;

    int a[2];
    int b[3];

    read(a,2);

    puts("");

    read(b,3);

    ord=ordinato(a,2);           
    printf("ord: %d\n",ord);

    ord=ordinato(b,3);
    printf("ord: %d\n",ord);

}

int ordinato(int a[], int dim){

    int i=0;
    
    while(i<dim-1 && a[i] < a[i+1]){

        i=i+1;
    }


    if(i==dim-1){      //    se alla fine del while i e' uguale a dim-1 vuoldire che e' tutto ok

        return 1;      //    quindi restituisce 1
    }
    else{              //   TUTTO QUESTO SI PUO' SCRIVERE COME return i==dim-1
        return 0;      //   PERCHE SE return i==dim-1 E' VERO RESTITUISCE 1 SENNO' 0  
    }                  //
}

void read(int a[],int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}