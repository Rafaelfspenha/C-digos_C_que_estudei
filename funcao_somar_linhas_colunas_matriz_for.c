// funcao_somar_linhas_colunas_matriz_for.c
#include <stdio.h>
#include <stdlib.h>

int tam = 5;

// procedimento para imprimir uma matriz
void imprimir(int m[][5]){
    int i, j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

// função que calcula e retorna a soma de uma coluna da matriz
int somarColuna(int x[][5], int l){
// quando for matriz é obrigatório colocar
// um número na parte das colunas.
// int x[][5]

    int c, soma = 0;

    for(c = 0; c < tam; c++)
        soma += x[c][l];
    return soma;
// quando houver return na função, tem que colocar
// o int ou char na frente dela.
}


int somarLinha(int x[][5], int l){
// quando for matriz é obrigatório colocar
// um número na parte das colunas.
// int x[][5]

    int c, soma = 0;

    for(c = 0; c < tam; c++)
        soma += x[l][c];
    return soma;
// quando houver return na função, tem que colocar
// o int ou char na frente dela.
}




int main() {

    int mat[5][5];
    int i, j;

    srand(time(NULL));

    // gerando números aleatórios entre 0 e 9 para preencher a matriz
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() % 10;
        }
    }

    // imprime a matriz gerada
    imprimir(mat);
    
    printf("\n");
    
    for(i = 0; i < tam; i++)
        printf("Soma da linha %d: %d\n",i, somarLinha(mat, i));

    printf("\n");
    
    // imprime a soma de todas as colunas da matriz
    for(i = 0; i < tam; i++)
        printf("Soma da coluna %d: %d\n",i, somarColuna(mat, i));

    
    
    


    return 0;
}