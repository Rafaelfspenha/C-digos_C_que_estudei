// loop_for_scanf.c
#include <stdio.h>
int main(){
    int n,i;
    
    printf("Ciclo infinito com for \n\n");
    
    // for(;;)
    for(i=0;;i++){
        printf("Digite um número inteiro: ");
        scanf("%d",&n);
        
        if(n == 7){
            printf("\nSaindo do ciclo for \n");
            break;
        }
    }
    printf("\nFim de programa...\n");
    return 0;
}