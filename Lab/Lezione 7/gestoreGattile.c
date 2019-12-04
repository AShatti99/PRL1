/*
Si scriva un programma di gestione di un gattile che per 4 volte legga:
• Un codice identificativo del gatto (un intero);
• L’eta del gatto in anni (un intero);
• Il peso del gatto in Kg (un float);
• Il tipo di cibo assunto dal gatto, espresso come 0 per le crocchette, 1
per le scatolette, 2 per il tonno in scatola.

Nello stesso ordine in cui sono stati immessi i dati dei gatti si stampino, uno
per linea, i codici identificativi e il tipo di cibo di tutti i gatti che hanno
problemi di dieta in giovane et`a, ovvero abbiano meno di 4 anni e pesino
pi`u della media dei gatti. A fianco del codice identificativo, si stampi,
separato da uno spazio, il tipo di cibo assunto dal gatto, ovvero crocchette,
scatolette oppure tonno.
Note: si consiglia di definirsi opportunamente una struct di nome
gatto, e rappresentare il tipo di cibo come una enum.
*/

#include <stdio.h>

typedef enum {

    crocchette,
    scatolette,
    tonno

} ciboGatto;

typedef struct {

    int codice;
    int eta;
    float peso;
    ciboGatto cibo;  // richiama enum

} gatto;

int main(void){

    gatto gattile[4];  // dichiaro un array
    float mediaPeso=0;

    for(int i=0; i<4; i++){   // mi carica per ogni ciclo: codice, eta, peso e cibo del gatto

        scanf("%d",&gattile[i].codice);
        scanf("%d",&gattile[i].eta);
        scanf("%f",&gattile[i].peso);
        scanf("%u",&gattile[i].cibo);

        mediaPeso=mediaPeso+gattile[i].peso;   // salvando la somma dei pesi
    }   

    mediaPeso=mediaPeso/4;  // calcola la media

    for(int i=0; i<4; i++){ 

        if(gattile[i].eta<4 && gattile[i].peso>mediaPeso){  // mi controlla a ogni ciclo la condizione

            switch(gattile[i].cibo){

                case 0:
                    printf("%d crocchette\n",gattile[i].codice); // se la condizione e' verificata, controlla il cibo
                    break;
                
                case 1:
                    printf("%d scatolette\n",gattile[i].codice);
                    break;
                
                case 2:
                    printf("%d tonno in scatola\n",gattile[i].codice);
                    break;
            }
        }
    }
}

