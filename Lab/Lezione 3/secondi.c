/*
Scrivere un programma che legga da tastiera un numero che rappresenta un
numero di secondi, e stampi le ore, i minuti e i secondi compresi.
*/

#include <stdio.h>

int main(void){
	
	int n;

	int ora;
	int minuti;
	int secondi;
	
	scanf("%d",&n);
	
	ora=n/3600;
	n=n%3600;
	
	minuti=n/60;
	secondi=n%60;
	
	
	printf("%d h %d min %d s\n",ora,minuti,secondi);
}
	

