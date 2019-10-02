// dato un array controllare che tutti gli elementi sono distinti

// (∀ i ∈ [0,dim-1) . 
//                    ¬(∃ j ∃ [i+1, dim) . a[j] == a[i])) 

#include <stdio.h>
 
int member(int el, int a[], int inizio, int fine);
int distinti(int a[], int dim);
void read(int a[], int dim);
 
int main(void){
 
    int a[5];
 
    read(a,5);
   
    if(distinti(a,5)){
        printf("\nGli elementi sono tutti distinti\n");
    }
    else{
        printf("\nGli elementi NON sono tutti distinti\n");
    }
}
 
 
int member(int el, int a[], int inizio, int fine){  // deve controllare l'array da i+1 a dim
                                                     
    int i=inizio;           // deve cercare un elemento=el nell'array a,
    int trovato=0;          // nell'intervallo degli indici [inizio, fine)

   
    while(i<fine && !trovato){

        printf("        i: %d\n",i);
        printf("        el==a[i] %d==%d?\n",el,a[i]);
        printf("        inizio: %d\n",inizio);
        printf("        fine: %d\n",fine);
 
        puts("\n");
 
        if(el==a[i]){       
            trovato=1;            
        }
        else{
            i++;
        }
    }
 
    return trovato;
}
 
int distinti(int a[], int dim){
 
    int i=0;
    int tuttOK=1;
 
    while(i<dim-1 && tuttOK){  

        static int ciclo=1;
        printf("ciclo %d\n",ciclo);
        printf("a[i]: %d\n",a[i]);
        printf("i+1: %d\n",i+1);
        printf("dim: %d\n",dim);
        ciclo++;
 
        puts("");      
 
        if(member(a[i],a,i+1,dim)){    // a[i] sara' l'elemento da cercare
           tuttOK=0;                   // i+1 sara' 1, poi 2, poi 3 fino a 4 
        }                              // dim e' 5
        else{
            i++;
        }
    }
 
    return tuttOK;
}
 
void read(int a[],int dim){
 
    puts("Inserisci elementi dell'array");
 
    for(int i=0; i<dim; i++){
 
        scanf("%d",&a[i]);
    }
}