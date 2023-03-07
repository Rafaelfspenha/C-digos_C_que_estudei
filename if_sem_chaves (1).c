// if_sem_parenteses.c
#include <stdio.h>
int main(void) {
    int a;
    
    printf("Digite qualquer valor: ");
    scanf("%d",&a);
    
    if(a<0)
        printf("\n\tValor negativo!\n");
    else
        printf("Valor positivo ou igual a zero");
        printf("\n**Valor positivo ou igual a zero**\n");
// quando o else não tem parênteses, só a 
// primeira linha é reconhecida, as 
// próximas são consideradas fora do 
// if/else

    printf("\nContinuação do programa...\n");
    
    if(a<0)
        printf("\n\tValor negativo!\n");
        //printf("\n\tValor negativo!\n");
        
// se a segunda linha deste if estiver
// ativa, então o programa acusará erro.

// Como o if não tem parênteses, ele só
// reconhece a 1° linha, como se ela tivesse 
// com parênteses e a segunda fora do parênteses
// formando uma nova linha.

// Para o programa o else abaixo estaria
// desconectado do if acima.
        
        
    else{
        printf("Valor positivo ou igual a zero");
    }
    
    return 0;
}
    