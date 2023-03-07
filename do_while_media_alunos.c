// do_while_media_alunos.c
#include <stdio.h>
int main() {
    float nota1,nota2,media;
    int resp;
    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);
        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);
       
        media=((nota1+nota2)/2);
        printf("\nMédia do aluno = %.2f\n",media);
        
        printf("\nDigite 1 para continuar ou qualquer tecla para sair ... ");
        scanf("%d",&resp);
        printf("\n");
    }while (resp == 1);
    return 0;
}