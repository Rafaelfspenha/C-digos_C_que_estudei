// enum_typedef2.c
#include <stdio.h>

enum Cores {branco=10,preto,amarelo,verde,azul,vermelho,magenta};
    
    enum Cores Cor=vermelho;

int main() {
    //Cor c=vermelho;
    printf("%d\n",Cor);
    return 0;
}