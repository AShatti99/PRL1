/*
Scrivere un programma che legga da tastiera un numero e stabilisca se pari
o meno, stampando in uscita rispettivamente 1 o 0.
*/

#include <stdio.h>

int main(void){
	
	int n;
	scanf("%d",&n);

	n++;
	
	printf("%d\n",n%2);
}
