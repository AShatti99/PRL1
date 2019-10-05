/*
Scrivere un programma che legga da tastiera due numeri a e b (anche con
virgola) e un operatore tra + - / % e stampi il risultato ottenuto applicando
l’operatore ai due numeri inseriti. Per l’operazione % gli operandi sono [a]
e [b]
*/

#include <stdio.h>

int main(void){
	
	double x;
	double y;
	
	scanf("%lf",&x);
	scanf("%lf",&y);

	int k=x;
	int j=y;
	double temp=k%j; // per ovviare al problema di double % double
	
	char operatore;
	scanf(" %c",&operatore);
	
	switch(operatore){
	
		case '+':
			printf("%.1lf\n",x+y);
			break;
		
		case '-': 
			printf("%.1lf\n",x-y);
			break;
		
		case '/': 
			printf("%.1lf\n",x/y);
			break;
		
		case '%':
			printf("%.1lf\n",temp);
			break;
	}
}
	
