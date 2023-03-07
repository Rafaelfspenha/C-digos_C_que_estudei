// reduzindo_massa_radioativa_for.c
#include <stdio.h>
int main(){
    
    float y;
    int z;
    
    printf("Digite a massa inicial: ");
    scanf("%f",&y);
    
    for(z=0;y >= 0.05;y/=2,z+=50)
        printf("Tempo %3d | massa %6.5f\n",z,y);

    return 0;
}