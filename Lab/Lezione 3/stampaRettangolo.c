/*
Scrivere un programma che stampi un rettangolo di 10 righe e 3 colonne la
cui cornice sia costituita da caratteri asterisco e la parte interna da ’X’.
*/

#include <stdio.h>

int main(void){
	
	printf("***\n");
	
	for(int i=0; i<8; i++){
	
		printf("*X*\n");
	}
	
	printf("***\n");
}
	
