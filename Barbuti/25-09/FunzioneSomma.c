#include <stdio.h>

int sum(int n, int m);

int main(void){

    int x=5;
    int y=10;

    printf("%d\n", sum(x,y));
}

int sum(int n, int m){

    return n+m;
}
