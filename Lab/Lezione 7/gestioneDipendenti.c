/*
Si vuole gestire un insieme di dipendenti di un’azienda identificati da un
codice. Di ogni dipendente interessa lo stipendio e il mese e l’anno di assunzione all’interno dell’azienda. 
Si scriva una procedura (una funzione che ritorna void) che aumenti lo stipendio di tutti i dipendenti 
assunti prima del 5/2000 di una certa percentuale passata come parametro alla funzione.
Si testi la funzione scrivendo un main che legga i dati di 2 dipendenti e
la percentule dell’aumento e chiamando la funzione cambi gli stipendi dei
dipendenti assunti prima del maggio del 2000. Nel main si stampi infine il
codice e lo stipendio dei dipendenti che guadagnano piu’ di 1200 euro.
*/

#include <stdio.h>

typedef struct {  // vari elementi dell'impiegato

    int codice;
    int stipendio;
    int mese;
    int anno;

} impiegato;

void aumentoStipendio(impiegato impiego[], int percentuale, int i);   // prototipo

int main(void){

    impiegato impiego[2];
    int percentuale; 

    for(int i=0; i<2; i++){     // carico i vari dati dell'impiegato

        scanf("%d",&impiego[i].codice);
        scanf("%d",&impiego[i].mese);
        scanf("%d",&impiego[i].anno);
        scanf("%d",&impiego[i].stipendio);
    }

    scanf("%d",&percentuale);  // e la percentuale d'aumento di stipendio

    for(int i=0; i<2; i++){ // aumenta lo stipendio se e' conforme alla condizione

        if(impiego[i].anno<2000 || ( impiego[i].mese<5 && impiego[i].anno==2000 )){ 

            aumentoStipendio(impiego, percentuale, i); 
        }
    }

    for(int i=0; i<2; i++){

        if(impiego[i].stipendio>1200){ // stampa gli impiegati con lo stipendio > 1200

            printf("%d %d\n",impiego[i].codice, impiego[i].stipendio);
        }
    }

}

void aumentoStipendio(impiegato impiego[], int percentuale, int i){

    int aumento= ( impiego[i].stipendio * percentuale ) /100; // (stipendio*percentuale)/100
    impiego[i].stipendio= impiego[i].stipendio+aumento; // aumento lo stipendio
}







