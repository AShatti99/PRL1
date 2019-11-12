/*
Si legga dall’input due matrici di interi di dimensione 4 × 3 (4 righe, 3
colonne). I valori dati in input sono ordinati per riga (per la prima matrice i primi 3 interi sono i valori della prima riga della matrice, e cos`ı via).
Si dichiari poi una terza matrice C sempre 4 × 3. Si scriva un programma
che calcola la matrice somma di A + B e stampi il risultato.
*/

#include <stdio.h>
#define RIG 4
#define COL 3

void sommaMat(int matA[][COL], int matB[][COL], int matC[][COL],int righe, int colonne);
void printMat(int mat[][COL], int righe, int colonne);
void readMat(int mat[][COL], int righe, int colonne);

int main(void){

    int matA[RIG][COL];             // dichiaro la matrice A
    int matB[RIG][COL];             // dichiaro la matrice B

    int matC[RIG][COL];             // dichiaro la matrice C (A+B)

    readMat(matA,RIG,COL);          // carico la matrice A
    readMat(matB,RIG,COL);          // carico la matrice B

    sommaMat(matA,matB,matC,RIG,COL);   // chiamo la funzione somma

    printMat(matC,RIG,COL);         // stampo la matrice C
}

void sommaMat(int matA[][COL], int matB[][COL], int matC[][COL],int righe, int colonne){

    for(int i=0; i<righe; i++){

        for(int j=0; j<colonne; j++){

            matC[i][j]=matA[i][j]+matB[i][j];  // C= A+B
        }
    }
    
}

void printMat(int mat[][COL], int righe, int colonne){  // stampa C

    for(int i=0; i<righe; i++){

        for(int j=0; j<colonne; j++){

            printf("%d\t",mat[i][j]);
        }

        puts("");
    }

}

void readMat(int mat[][COL], int righe, int colonne){

    for(int i=0; i<righe; i++){

        for(int j=0; j<colonne; j++){

            scanf("%d",&mat[i][j]);
        }
    }
}