#include <stdio.h>

int main(void){

    int x, y;

    scanf("%d%d",&x,&y);

    while(x!=y){               // alla fine per uscire deve essere uguali

        if(x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }

    printf("MCD: %d\n",x);     // quindi stampare x o y e' indifferente
}
