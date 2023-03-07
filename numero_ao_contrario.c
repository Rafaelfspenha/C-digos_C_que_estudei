// numero_ao_contrario.c
#include <stdio.h>
int main(){
    int x,y,z=0;
    printf("Digite um número: "); // 123
    scanf("%d",&x);
    while (x>0){
        y=x%10;
        /*
        y pega o resto - O resto tem o valor do último algarismo.
        Na 1° rodada o valor será 3.
        Na 2° será 2.
        Na 3° será 3.
        */
        z=z*10+y;
        /*
        1° z fica com o valor de y, pois o valor de z inicial é zero.
        Nas próximas rodadas z é multiplicado por 10 mais o valor de y.
        se for inserido o número 123.
        Na 1° rodada o valor final de z será 3.
        Na 2° será 32.
        Na 3° será 321.
        Os algarismo sendo multiplicados por 
        10, sempre avançará uma posição para 
        esquerda.
        */
        x=x/10;
        /*
        x fica com o valor do quociente.
        Na 1° rodada o valor final será 12
        Na 2° será 1.
        Na 3° será 0.
        */
    }
    printf("\nNúmero ao contrário: %d\n",z);
    return 0;
}

