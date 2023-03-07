// for_varios_argumentos_entre_virgula.c
#include <stdio.h>
int main(){
    int x,y,z;
    
    // todas as condições devem ser 
    // verdadeiras
    for(x=0,y=0,z=0;x<10,y<5,z<3;x++,y++,z++){
        printf("%d\t %d\t %d\n",x,y,z);
    }
    return 0;
}