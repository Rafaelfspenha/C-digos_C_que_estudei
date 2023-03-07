// enum.c
#include <stdio.h>
int main() {
    enum semana {domingo=1,segunda,terca,quarta,quinta,sexta,sabado};
    enum {janeiro=1,fevereiro,marco, abril,maio,junho,julho,agosto, setembro,outubro,novembro,dezembro};
    enum {zero,um,dois, tres,salto=13,quatorze,quinze};
    printf("%d",quatorze);
    return 0;
}