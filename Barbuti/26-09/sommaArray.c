// somma elementi dell'aray

#include <stdio.h>

int sum(int a[], int dim);
void read(int a[],int dim);

int main(void){

    int s1, s2;

    int a[5];
    int b[10];

    read(a,5);

    puts("");

    read(b,10);

    s1=sum(a,5);      // fa la somma del primo array e lo assegna a s1
    s2=sum(b,10);     // fa la somma del secondo array e lo assegna a s2

    printf("s1: %d \ns2: %d\n",s1,s2);
}

int sum(int a[], int dim){

    int s=0;

    for(int i=0; i<dim; i++){

        s=s+a[i];          // somma se stesso + il valore dell'array corrente
    }

    return s;
}

void read(int a[],int dim){

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }
}