/*
Si legga dall’input una matrice di interi di dimensione 4 × 2 (4 righe, 2
colonne) e una seconda matrice di dimensione 2×3. Per ogni matrice i valori
dati in input sono ordinati per riga (per la prima matrice i primi 3 interi sono
i valori della prima riga della matrice, e cos`ı via). Si dichiari poi una terza
matrice C di dimensioni 4 × 3. Si scriva una funzione che passate tre matrici
A di dimentioni n × 2, B di dimensioni m × 3 e C di dimensioni s × 3 (per
esempio con prototipo
void multiplymatr(int A[][2], int B[][3], int C[][3], int n) )
calcoli in C il prodotto di A per B. Si stampi il risultato nella funzione main.
*/

#include <stdio.h>
#define X 4  // riga1
#define Y 2  // colonna1 e riga 2
#define Z 3  //            colonna 2

void molMat(int matA[][Y], int matB[][Z], int matC[][Z], int riga1, int col1, int col2);
void printMat(int mat[][Z], int riga, int col);

int main(void){

    int matA[X][Y];      // inizializzo la matrice A
    int matB[Y][Z];      // inizializzo la matrice B

    int matC[X][Z];

    for(int i=0; i<X; i++){                //

        for(int j=0; j<Y; j++){            //       CARICO LA MATRICE A

            scanf("%d",&matA[i][j]);       //
        }                           
    }                                      

    for(int i=0; i<Y; i++){                //  

        for(int j=0; j<Z; j++){            //       CARICO LA MATRICE B

            scanf("%d",&matB[i][j]);       //
        }
    }

    molMat(matA,matB,matC,X,Y,Z);   // chiamo la funzione

    printMat(matC,X,Z);    // stampo C
}

void molMat(int matA[][Y], int matB[][Z], int matC[][Z], int riga1, int col1, int col2){

    for(int i=0; i<riga1; i++){

        for(int j=0; j<col2; j++){

            matC[i][j]=0;                  // azzero a ogni iterazione

            for(int k=0; k<col1; k++){ // serve un terzo ciclo per calcolare la somma e la moltiplicazione

                matC[i][j]=matC[i][j]+matA[i][k]*matB[k][j]; 
            }
        }
    }
}

void printMat(int mat[][Z], int riga, int col){

    for(int i=0; i<riga; i++){

        for(int j=0; j<col; j++){

            printf("%d\t",mat[i][j]);
        }

        puts("");
    }
}

