/*
Create una copia di hello.c
Modificate la copia perche il programma faccia le seguenti
cose:
Dichiari una variabile intera age
Memorizzi nella variabile age la vostra età
Stampi a video il contenuto della variabile age
Compilate ed eseguite come nell’esercizio precedente
Eseguite una seconda volta il vostro programma
redirigendone l’output nel file output.txt: controllate il
contenuto di quest’ultimo file di testo usando i comandi da
shell
*/

#include <stdio.h>

int main(void){

    int age=20;

    printf("Hello World! I'm %d\n",age);
}