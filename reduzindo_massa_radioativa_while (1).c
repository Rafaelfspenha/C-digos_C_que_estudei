// reduzindo_massa_radioativa_while.c
#include <stdio.h>
int main(){
    
    float y;
    int z=0;
    
    printf("Digite a massa inicial: ");
    scanf("%f",&y);
    
    while(y >= 0.05){
        printf("Tempo %3d | massa %6.5f\n",z,y);
        y/=2;
        z+=50;
    }
    
    return 0;
}