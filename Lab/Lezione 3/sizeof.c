/* Scrivere un programma che legga da tastiera un numero intero x e stabilisca
il numero di byte necessario a memorizzare x variabili di tipo intero. */

#include <stdio.h>

int main(void){
	
	int x;

	scanf("%d",&x);
	
	printf("%d\n",x*sizeof(int));
}
