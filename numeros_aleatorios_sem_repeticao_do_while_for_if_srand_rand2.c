// numeros_aleatorios_sem_repeticao_do_while_for_if_srand_rand2.c
#include <stdio.h>
#include <time.h>
int main(){
    int i=0,j,vet[50],igual;
    
    srand(time(NULL));
    
    do{
        vet[i]=rand()%50;
        igual=0;
        for(j=0;j<i;j++){
            if(vet[j] == vet[i])
                igual=1;
        }
        if(igual==0)
            i++;
    }while(i < 50);
    
    for(i=0;i<50;i++)
        printf("%2d\n",vet[i]);
    printf("\n\n");
    
    return 0;
}