// imprimindo_numeros_como_se_tivesse_3_digitos.c 
#include <stdio.h>
int main() {
    int x,y=0;
    
    for(x=1;x<=1000;x+=2){
        printf("%3d\n",x);
    }
  
    
    return 0;
}