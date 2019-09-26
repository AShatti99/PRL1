#include <stdio.h>

int main(void){

    int x=5;
    int y=10;

    int temp=x;

    x=y;     // restituisce 10
    y=temp;  // restituisce 5

    printf("x: %d \ny: %d\n",x,y);
}