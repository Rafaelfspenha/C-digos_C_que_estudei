// media_vetor_funcao.c
#include <stdio.h>

// protótipo da função media
float media(int n, float *vnotas);

int main(void){
    float vnotas[100];
    float media_notas;
    int i,z;
    
    // Leitura das notas
    printf("Digite a qtd. de notas e descobrir a média: ");
    scanf("%d",&z);
    
    printf("\n");
    
    for(i=0;i<z;i++){
        printf("Digite o valor da %d° nota: ",i+1);
        scanf("%f",&vnotas[i]);
    }
    
    // chamada da função
    media_notas = media(z,vnotas); // vnotas = vnotas[0]
    
    printf("\nMédia = %.1f \n",media_notas);
    
    return 0;
}

/*
    Função para cálculo da média

    Parâmetros:
        recebe a quantidade de elementos n.
        recebe o endereço do vetor notas em *vnotas.
    Retorno:
        retorno média na variável n.
*/

float media(int n,float *vnotas)
{
    int i;
    float m=0,soma=0;
    
    // fazendo a somatória das notas
    for(i=0;i<n;i++){
        soma+=vnotas[i];
    }
    
    // dividindo pela quantidade de elementos n
    m= soma/n;

    // retornado a média
    return m;
}