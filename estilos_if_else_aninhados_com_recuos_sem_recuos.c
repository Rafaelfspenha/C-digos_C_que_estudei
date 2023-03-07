// if_else_aninhados_com_recuos_sem_recuos.c
#include <stdio.h>
int main(){
    int a;
    printf("\nDigite um valor qualquer: ");
    scanf("%d",&a);
  
// 1° versão
    if(a < 0)
        printf("\n\tValor negativo!");
    else
       if(a>0)
           printf("\n\tValor positivo!\n");
       else
            printf("\n\tValor igual a zero!\n");

// 2° versão

    if(a<0)
        printf("\n\tValor Negativo!\n");
    else if(a>0)
        printf("\n\tValor Positivo!\n");
    else
        printf("\n\tValor igual a zero!\n");

    
    return 0;
}