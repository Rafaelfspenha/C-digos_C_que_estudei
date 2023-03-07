// enum_typedef.c
#include <stdio.h>

enum Cores {branco=10,preto,amarelo,verde,azul,vermelho,magenta};

typedef enum Cores Cor;

int main() {
    Cor c=vermelho;
    printf("%d\n",c);
    return 0;
}