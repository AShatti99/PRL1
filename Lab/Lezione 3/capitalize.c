/*
Scrivere un programma che legga da tastiera carattere alfabetico in minuscolo
e stampi lo stesso carattere in maiuscolo.
*/

#include <stdio.h>

int main(void){
	
	char x;
	
	scanf("%c",&x);
	
	printf("%c\n",x-32);  // leggi la tabella nelle slide
}
