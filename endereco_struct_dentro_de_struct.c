// endereco_struct_dentro_de_struct.c
#include <stdio.h>
#include <stdlib.h>

struct endereco{
    char rua[50];
    char bairro[50];
    char cidade[50];
    int numero;
};

struct aluno{
    char nome[50];
    struct endereco moradia;
};

int main(int argc, char *argv[]){

    struct aluno x;
    
    // o scanf se sobrepõe ao gets
    // se colocar o gets antes de scanf
    // o cursor vai direto pro scanf   
    
    printf("Nome do aluno? ");
    gets(x.nome);
    
    printf("\nCidade? ");
    gets(x.moradia.cidade);
    
    printf("\nBairro? ");
    gets(x.moradia.bairro);
    
    printf("\nRua? ");
    gets(x.moradia.rua);
    
    printf("\nNúmero? ");
    scanf("%d",&x.moradia.numero);
    
    printf("\n\nAluno: %s\n\n",x.nome);
    
    printf("Endereço completo: Rua %s, N° %d,%s - %s\n\n",x.moradia.rua,x.moradia.numero,x.moradia.bairro,x.moradia.cidade);
    
    return 0;
}