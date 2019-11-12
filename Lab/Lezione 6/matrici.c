/*
Si scriva una funzione che data una matrice n x 3 calcoli l’indice dell’ultima
colonna che contiene solo multipli di 3, la funzione deve ritornare -1 nel caso
in cui nessuna colonna rispetti questa proprieta. Si scriva un programma che
legga dall’input una matrice di interi di dimensione 4x3 (4 righe, 3 colonne)
e si stampi il risultato della funzione.
I valori dati in input sono ordinati per riga (i primi 3 interi sono i valori della
prima riga della matrice, e cosi via).
*/

#include <stdio.h>
#define RIG 4
#define COL 3

void readMat(int mat[][COL],int righe, int colonne);
int ultimaColonna(int mat[][COL], int righe, int colonne);

int main(void){

    int mat[RIG][COL];

    readMat(mat,RIG,COL);  // carico la matrice

    printf("%d\n",ultimaColonna(mat,RIG,COL));  // stampo l'indice
}

int ultimaColonna(int mat[][COL], int righe, int colonne){
    
    int c0=0;   // conto i vari numeri divisibili per 3 per la prima colonna
    int c1=0;                                               // seconda colonna
    int c2=0;                                               // terza colonna

    int indice=-1;  // inizializzo a -1 nel caso non ci sia nessuna colonna conforme

    for(int i=0; i<righe; i++){

        for(int j=0; j<colonne; j++){

            if(j==0 && mat[i][j]%3==0){  

                c0++;

                if(c0==4){          // se c0=4 cioe' ogni elemento della colonna e' divisibile per 3
                    indice=j;       // indice=j
                }
            }
            if(j==1 && mat[i][j]%3==0){

                c1++;

                if(c1==4){
                    indice=j;
                }
            }
            if(j==2 && mat[i][j]%3==0){

                c2++;

                if(c2==4){
                    indice=j;
                }
            }  
        }
    }

    return indice;
}

void readMat(int mat[][COL],int righe, int colonne){

    for(int i=0; i<righe; i++){

        for(int j=0; j<colonne; j++){

            scanf("%d",&mat[i][j]);
        }
    }
}
