// linhas_e_colunas.c
#include <stdio.h>
int main() {
    int x,y;
    for (x=1;x<=10;x++) {
        for (y=1;y<=5;y++) {
            printf(" %d \t",x);
        }
    }
    printf("\n");
    return 0;
}