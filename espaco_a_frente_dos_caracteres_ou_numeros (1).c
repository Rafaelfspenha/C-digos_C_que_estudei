// espaco_a_frente_dos_caracteres_ou_numeros.c 
#include <stdio.h>
int main() {
    
    int a=6000;
    float b=6000.32;
    
    printf("Digite a senha:%4.d\n",a);
    printf("Digite a senha:%5.d\n",a);
    printf("Digite a senha:%7.d\n",a);
    
    printf("Digite a senha:%4.2f\n",b);
    printf("Digite a senha:%5.1f\n",b);
    printf("Digite a senha:%10.1f\n",b);
   
    return 0;
}