#include <stdio.h>

int main(void){

    int x=5;                 // qui x=5

    int *p=&x;               // qui *p e' uguale all'indirizzo di memoria di x

    x=x+1;                   // qui x=6

    *p=*p+1;                 // qui *p=7 quindi x=7


    printf("*p: %d\n",*p);
    printf("x: %d\n",x);
}