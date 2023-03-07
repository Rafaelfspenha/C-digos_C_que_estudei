// conversao_seg_min_hora.c
#include <stdio.h>
int main(){

    char tempo;
    int valor;
    
    printf("digite 's' para segundos, 'm' para minutos ou 'h' para horas: ");
    scanf("%c",&tempo);
    printf("\nDigite o valor para conversão: ");
    scanf("%d",&valor);
    
    if(tempo=='s'){
        printf("\n\n%d segundo(s) equivale a %.2f minuto(s).\n\n",valor,(float) valor/60);
        printf("%d segundo(s) equivale a %.2f hora(s).\n\n",valor,(float) (valor/60)/60);
    }
    
    if(tempo=='m'){
        printf("\n\n%d minuto(s) equivale a %.2f segundo(s).\n\n",valor, (float) valor*60);
        printf("%d minutos(s) equivale a %.2f hora(s).\n\n",valor, (float) valor/60);
    }
    
    if(tempo=='h'){
        printf("\n\n%d hora(s) equivale a %.2f minuto(s).\n\n",valor, (float) valor*60);
        printf("%d hora(s) equivale a %.2f segundo(s).\n\n",valor,(float) (valor*60)*60);
    }
    
    return 0;
}