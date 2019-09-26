#include <stdio.h>

int fatt(int x);

int main(void){

    int n;

    printf("Inserisci un numero: ");
    scanf("%d",&n);

    printf("Il fattoriale e' %d\n",fatt(n));
}

int fatt(int x){

    if(x==0){
        return 1;
    }
    else if(x==1){
        return x;
    }
    else{
        return x*(fatt(x-1));
    }
}