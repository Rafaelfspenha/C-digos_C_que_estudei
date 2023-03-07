// incremento_e_decremento_mesma_formula.c
#include <stdio.h>

int main(){
    int i=0;
    for(i=1;i<=5;i++){
// o i inicia com 1 e depois aumenta
// de 1 em 1
        printf("%d\n",i);
        if(i==1)
            i--;
            printf("%d\n",i);
    }
    return 0;
}
