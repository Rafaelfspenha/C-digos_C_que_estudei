// nome_idade_struct_typedef.c
#include <stdio.h>
typedef struct{char nome[32];int idade;} Pessoa;
int main()
{
    Pessoa p1={"Joana",27};
    printf("%s tem %d anos.\n",p1.nome,p1.idade);
    return 0;
}