/*
Scrivere un programma che legga da tastiera un valore di temperatura (anche decimale) espresso in gradi Celsius e ne stampi la conversione in gradi Fahrenheit usando due cifre decimali.
N.B.: Ricordiamo che per convertire un valore da Celsius (C) in Fahrenheit
(F) bisogna usare la seguente formula:
F = C × 1.8 + 32 
*/

#include <stdio.h>

int main(void){

	double c;
	scanf("%lf",&c);

	double f=c*1.8+32;

	printf("%.2lf\n",f);
}

	
