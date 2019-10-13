/*
Scrivere un programma che legga da tastiera un numero intero n con n ≥ 0
e stampi i valori della successione di Fibonacci, uno per riga, fino al primo
valore della successione strettamente maggiore di n (questo valore non va
stampato).
Si ricorda che la successione di Fibonacci `e definita ricorsivamente come:
F(0) = 0
F(1) = 1
F(i) = F(i − 1) + F(i − 2)
*/

#include <stdio.h>

int main(void){

    int n;

    int a=0;
    int b=1;
    int sum=1;

    scanf("%d",&n);     // legge n

    printf("%d\n",a);   // stampa 0

    if(n>0){ // se n=0 deve stampare solo a, se n>0 continua il resto del programma

        printf("%d\n",b); // stampa 1

        while(a+b<=n){ // si usa a+b e non sum perche' mi stamperebbe un valore un valore + grande di n

            sum=a+b;      // sum serve per dare il valore a b
            printf("%d\n",sum);

            a=b;
            b=sum;
        }
    }
}