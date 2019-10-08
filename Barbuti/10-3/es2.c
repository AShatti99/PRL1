// scrivere una funzione che dato un array a, di dimensioni dima e un array b, di dimensione dimb
// restituisca il valore di verita' della formula:
// ∀ i [0, dim).
//              (a[i]>0) implica
//                               (∃ j ∈ [0, dimb). a[i]=b[j]) ) )
// tutti gli elementi di a, se l'elemento e' maggiore di 0 allora deve comparire anche in b
// se l'elemento a non e' maggiore di 0, puo' comparire o no, non importa

#include <stdio.h>

int member(int el, int a[], int dim);
int formula(int a[], int dima, int b[], int dimb);
void read(int a[], int dim);

int main(void){

    int a[5];
    int b[5];

    read(a,5);
    read(b,5);

    if(formula(a,5,b,5)){
        printf("\nCondizione verificata\n");
    }
    else{
        printf("\nCondizione NON verificata\n");
    }
}

int member(int el, int a[], int dim){

    int i=0;
    int trovato=0;

    while(i<dim && !trovato){

        if(el==a[i]){
            trovato=1;
        }
        else{
            i++;
        }
    }

    return trovato;
}

int formula(int a[], int dima, int b[], int dimb){

    int i=0;
    int tuttOK=1;

    while(i<dima && tuttOK){         // leggi sotto

        if(a[i]>0){                    // se l'elemento e' maggiore di 0, si fa la member

            if(member(a[i],b, dimb)){  // se e' membro di b, continua il controllo
                i++;                   // se non lo e' esce dal while 
            }
            else{
                tuttOK=0;
            }
        }
        else{

            i++;                        // se e' minore di 0, continua il controllo, non importa
        }
    }

    return tuttOK;
}

void read(int a[],int dim){

    puts("Inserisci elementi dell'array");

    for(int i=0; i<dim; i++){

        scanf("%d",&a[i]);
    }

    puts("");
}


/*
while(i<dima && tuttOK){
    
    if(a[i]>0){
        
        if(!member(a[i],b,dimb))
            tuttOK=0;
        }
        i++;            // si esegue indipendentemente dall'if
    }
}
*/

/*
while(i<dim && tuttOK){
    if(a[i]<=0 || member(a[i], b, dimb)){
        i++;
    }
    else{
        tuttOK=0;
    }
}
*/

/* 
while(i<dim && tuttOK){
    if(a[i]>0 && !member(a[i],b,dimb)) {
        tuttOK=0;
    }
    else{
        i++;
    }
}
*/
