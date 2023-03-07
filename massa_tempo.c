// massa_tempo.c
#include <stdio.h>
int main(){
    float massa;
    int tempo=0;
    
    printf("Digite a massa do material em gramas: ");
    scanf("%f",&massa);
    
    while(massa >= 0.05){
        massa/=2;
        tempo+=50;
    }
    
    printf("Massa final: %.3f\n",massa);
    printf("O tempo decorrido foi de %d segundos.\n\n",tempo);
    
    return 0;
}