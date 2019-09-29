/*
Modificare il programma dell’Esercizio 3 perchè il testo
”Ciao Mondo, ho X anni e il mio numero di matricola è Y”
sia definito dalla direttiva parametrica del pre-processore
HELLO(X,Y)
Stampare il testo a schermo usando la direttiva
HELLO(X,Y)
Compilare ed eseguire il codice
Usate GCC per mostrare a schermo l’output del
pre-processore (senza compilazione e linking): che cosa è
successo al vostro file C?
*/

#include <stdio.h>
#define X 20
#define Y 578268
#define HELLO(X,Y)  printf("Ho %d anni e il mio numero di matricola e' %d\n",X,Y); 

int main(void){

    HELLO(X,Y);
}