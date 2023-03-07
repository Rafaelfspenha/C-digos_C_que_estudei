// calloc_malloc_e_uso_do_if_com_parenteses.v

// a função malloc não limpa o lixo 
// de memória.

// a função calloc limpa o lixo de 
// memória

// quando memória está limpa ela 
// apresenta o valor 0;

#include <stdio.h>
#include <stdlib.h>

void espaco();

int main() {

    int i,*vet1,*vet2,x,y;
    
    vet1 = (int *)malloc(10*sizeof(int));
    vet2 = (int *)malloc(10*sizeof(int));
    
    x=11;
    y=11;
    
    printf("malloc: vet1\n");
    
    for(i=0;i<=x;i++) {
        vet1[i]=30000+i;
        if(i==x) {
            printf("%d.",vet1[i]);
            break;
        }
        printf("%i, ",vet1[i]);      
    }
    
    espaco();
    
    printf("malloc: vet2\n");
    
    for(i=0;i<=y;i++) {
        vet1[i]=30000+i;
        if(i==y) {
            printf("%d.",vet1[i]);
            break;
        }
        printf("%i, ",vet1[i]);      
    }
   
    free(vet1);
    free(vet2);

   // vet1 = malloc(10*sizeof(int));
    vet2 = calloc(10,sizeof(int));
    
    espaco();
    
    printf("Sem calloc: vet1 \n");
    
    for(i=0;i<=x;i++) {
        if(i==x) {
            printf("%d.\n",vet1[i]);
            break;
        }
        printf("%d, ",vet1[i]);
    }
    
    espaco();
    
    printf("Com calloc: vet2\n");
    for(i=0;i<=y;i++) {
        if(i==y) {
            printf("%d.\n",vet2[i]);
            break;
        }
        printf("%d, ",vet2[i]);
    }
    
    return 0;
}


void espaco() {
    printf("\n\n");
}