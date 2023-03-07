// numero_maior_que_100.c
#include <stdio.h>
int main(){
    int x;
    printf("Digite um número maior que 100: ");
    scanf("%d",&x);
    while (x<=100){
        printf("\ndigite novamente: ");
        scanf("%d",&x);
    }
    printf("\nParabéns você digitou um número maior que 100.\n");
}

