// setbuf_struct_fgets_funcao_for_matriz.c
#include <stdio.h>
#include <stdlib.h>

/*
                Aula 175: Como criar uma matriz de struct

                Código escrito por Wagner Gaspar
                Abril de 2021
*/

typedef struct{
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

// função que lê os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){
    Pessoa p;
    printf("\nDigite seu nome: ");
    fgets(p.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf(" %d", &p.idade);
    printf("Digite f ou m para o sexo:");
    scanf(" %c", &p.sexo);
    printf("Digite o dia do seu nascimento:");
    scanf(" %d", &p.dataNas.dia);
    printf("Digite o mês do seu nascimento:");
    scanf(" %d",&p.dataNas.mes);
    printf("Digite o ano de nascimento:");
    scanf(" %d",&p.dataNas.ano);
    setbuf(stdin,NULL);
    return p;
}

int main() {

    Pessoa pessoas[2][2];
    int l, c;

    // preenche a matriz com pessoas lidas do teclado
    for(l = 0; l < 2; l++){
       for(c = 0; c < 2; c++) 
         pessoas[l][c] = lerPessoa();
    }

    // imprime a matriz de pessoas
    for(l = 0; l < 2; l++){
       for(c = 0; c < 2; c++) 
         imprimirPessoa(pessoas[l][c]);
    }

    return 0;
}