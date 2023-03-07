// notas_struct_typedef.c
#include <stdio.h>
#include <stdlib.h>

struct tAluno
{
// Utilizando os tipos redefinidos dentro da struct
int matricula;
float prova1,prova2,media;
};

// redefinindo o struct para  encurtar o comando na elaboraçay
typedef struct tAluno tAlun;

int main(void) {
    /* declarando a variável do tipo tAluno
    note que com a redefinição agora não é mais
    necessário escrever struct tAluno */
    tAlun aluno;
    
    printf("Informe o número de matrícula: ");
    scanf("%d",&aluno.matricula);
    
    printf("\nInforme a nota da 1° nota: ");
    scanf("%f",&aluno.prova1);
    
    printf("Informe a nota da 2° nota: ");
    scanf("%f",&aluno.prova2);
    
    aluno.media=(aluno.prova1+aluno.prova2)/2;
    
    printf("\nMatricula ....: %d\n", aluno.matricula);
    printf("\nMédia do Aluno: %.2f\n", aluno.media);
    
    return 0;
}
