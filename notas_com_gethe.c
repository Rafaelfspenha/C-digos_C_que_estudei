// notas_com_gethe.c
#include <stdio.h>
#include <conio.h>

int main() 
{
int cont;
char cod;
float nota, media,total;
total = 0;
cod='C';
while (cod != 'F') {
    for (cont=1;cont <=4; cont++) {
        printf("Digite a %d° nota: ",cont);
        scanf("%f",&nota);
        total=total+nota;
    }
    printf("\nNota Média: %.2f\n\n",total/4);
    total = 0;
    nota = 0;
    printf("Deseja calcular a média de mais uma aluno? Pressione qualquer tecla para prosseguir, ou a tecla 'F' para sair.");
    getche();
    cod=getche();
    printf("\n\n");
    
}
return 0;
}
