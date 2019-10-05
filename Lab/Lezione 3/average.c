/*
Scrivere un programma che legga da tastiera tre numeri (anche con virgola)
e stampi in uscita la media, riportandola con tre cifre decimali. 
*/

#include <stdio.h>

int main(void){
	
	double a;
	double b;
	double c;
	
	scanf("%lf%lf%lf",&a,&b,&c);

	double m=(a+b+c)/3;
	
	printf("%.3lf\n",m);
}
