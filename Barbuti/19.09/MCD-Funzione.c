#include <stdio.h>

int MCD(int n, int m);

int main(void){

    int x, y, z, w;

    scanf("%d%d%d%d",&x,&y,&z,&w);

    printf("MCD: %d\n",MCD(x,y));
    printf("MCD: %d\n",MCD(z,w));
}

int MCD(int n, int m){

    while(n!=m){

        if(n>m){
            n=n-m;
        }
        else{
            m=m-n;
        }
    }

    return n;
}