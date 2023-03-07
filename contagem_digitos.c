// contagem_digitos.c
#include <stdio.h>
int main(){
    int x, y=0;
    printf("Entre com o número: ");
    scanf("%d",&x);
    while (x>0)
    {
        y++;
        x=x/10;
    }
    printf("\nDigítos= %d\n",y);
    return 0;
}

