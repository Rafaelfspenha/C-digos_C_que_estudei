// endereco_struct_gets.c
#include <stdio.h>
#include <stdlib.h>

struct endereco{
    char rua[50];
    int numero;
};

int main(int argc, char *argv[])
{
    struct endereco x;
    printf("Rua? ");
    gets(x.rua);
    printf("\nNúmero? ");
    scanf("%d",&x.numero);
    printf("\nEndereço completo: Rua %s n° %d\n\n",x.rua,x.numero);
    return 0;
}