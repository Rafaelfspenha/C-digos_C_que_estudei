// numero_horizontal_para_vertical_cabeca_para_baixo.c
#include <stdio.h>
int main()
{
    int x, y;
    printf("Insira um número na horizontal e imprima de cabeça para baixo na vertical");
    printf("\n\nDigite um número: ");
    scanf("%d",&x);
    printf("\n");

    while(x>0)
    {
        y=x%10;
        printf("%d",y);
        printf("\n");
        x=x/10;
    }

    return 0;
}
