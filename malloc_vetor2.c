// malloc_vetor2.c
#include <stdio.h>

int main(int *argc, char *argv) {

// cria um ponteiro para um vetor de 
//inteiros.
// Armazena o local de memória alocado
// (primeira posição do vetor)
    int *pvetor;
    
// número de elementos no vetor
    int n=10;
    
// aloca um espaço de memória do 
// tamanho de n inteiros
    pvetor=(int*)malloc(n*sizeof(int));
    
// imprime a posição de memória da 
// posição 0.
    printf("Posição na memória do 1° elemento: %#x\n",pvetor);
    
// atribui um valor na posição 0 do vetor.
    pvetor[0] = 56;
    
// imprime o valor na posição 0
    printf("\nValor do 1° elemento: %d\n",pvetor[0]);

// imprime a posição de memória da 
// posição 1;
    printf("\nPosição na memória do 2° elemento: %#x\n",&pvetor[1]);
    
// atribui um valor para a posição 1 do
// vetor.
    pvetor[1]=100;
    
// imprime o valor da segunda posição
    printf("\nValor do 2° elemento: %d\n",pvetor[1]);
    
// libera a memória alocada
    
    pvetor++;
    *pvetor=20;
    
    printf("\nValor do 3° elemento: %d\n",*pvetor);
    
    
    
    
    
    
    free(pvetor);
    
    return 0;
}