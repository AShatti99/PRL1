/*
Si realizzi un programma C che contenga una funzione diff abs che prenda
come parametri 2 float (a e b) e la cui esecuzione faccia si che la variabile
corrispondente al primo argomento contenga il valore di a − b, mentre la
variabile corrispondente al secondo argomento contenga b − a. Si stampi a
video il contenuto delle 2 variabili all’uscita dall’esecuzione della funzione,
con precisione alla seconda cifra decimale.
*/

#include <stdio.h>

float diffAbs(float *a, float *b);

int main(void){

    float x, y;                 

    scanf("%f%f",&x,&y);

    diffAbs(&x,&y);         // fornisco i valori di x e y alla funzione

    printf("%.2f \n%.2f\n",x,y);
}

float diffAbs(float *a, float *b){

    float temp1=*a;        // creo una variabile temp che contenga il valore puntato da a
    float temp2=*b;        

    *a= temp1- temp2;      // modifico il valore puntato da a: sottraendo il valore di a
    *b= temp2- temp1;      // con il valore puntato da b
}
