/*
Definire, con direttive del pre-processore, una costante
MATRICOLA che contenga il vostro numero di matricola
Stampare a schermo il testo
”Ciao Mondo, ho X anni e il mio numero di matricola è Y”
dove X è il contenuto della variabile age dell’esercizio
precedente e Y è il valore di MATRICOLA
*/

#include <stdio.h>
#define MATRICOLA 578268

int main(void){

    int age=20;
    printf("Ciao mondo, ho %d anni e il mio numero di matricola e' %d\n", age, MATRICOLA);
}