/*
Scrivere un programma che legga da tastiera tre numeri interi e stampi il
massimo tra i tre.
*/

#include <stdio.h>

int main(void){
	
	int a, b, c;
	
	scanf("%d%d%d",&a,&b,&c);

	int max=a;
	
	if(b>max){
	   max=b;
	}

	if(c>max){
  	  max=c;
	}

	printf("max: %d\n",max);
}
