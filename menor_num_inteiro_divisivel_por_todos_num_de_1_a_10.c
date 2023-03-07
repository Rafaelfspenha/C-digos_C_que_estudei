// menor_num_inteiro_divisivel_por_todos_num_de_1_a_10.c
#include <stdio.h>
int main(){
    int i,divisores,valor=9;
   // int valor= 8;
    
    do{
        divisores=0;
        valor++;
        // valor+=2; 
 // verificando só números pares para torna o programa mais eficiente
        for(i=1;i<=10;i++){
            if(valor %i == 0)
                divisores++;
        }
    }while(divisores != 10);
    
    printf("Valor: %d\n\n",valor);
    
    return 0;
}