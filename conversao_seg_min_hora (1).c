// conversao_seg_min_hora.c
#include <stdio.h>

int main(){
    int segundos,h,m,s,resto;
    
    printf("Digite uma quantidade de segundos: ");
    scanf("%d",&segundos);
    
    h=segundos/3600;
    resto=segundos%3600;
    m=resto/60;
    s=resto%60;
    printf("\n%d:%d:%d\n",h,m,s);
    
    return 0;
}