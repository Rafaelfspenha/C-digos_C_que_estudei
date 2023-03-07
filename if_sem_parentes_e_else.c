// if_sem_parentes_e_else.c
#include <stdio.h>
int main(void) {
    int a;
    
    printf("Digite qualquer valor: ");
    scanf("%d",&a);
    
    if(a<0)
        printf("\n\tValor negativo!\n");
    printf("\nContinuação do programa...\n");
    
    return 0;
}
    