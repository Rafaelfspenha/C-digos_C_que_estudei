// return_multiplica.c
#include <stdio.h>

int multiplica(int n1,int n2)
{
    int res;
    res = n1*n2;
    return res;
}

int main(void)
{
    int v1,v2,resultado;
    printf("Multiplicação\n\n");
    printf("Digite o 1° valor: ");
    scanf("%d",&v1);
    printf("Digite o 2° valor: ");
    scanf("%d",&v2);
    
    //resultado=v1*v2;
    //printf("\nResultado: %d\n", resultado);
   
    resultado=multiplica(v1,v2);
    printf("\nResultado: %d\n", resultado);
    
    //printf("\nResultado: %d\n", multiplica(v1,v2));
  
      return 0;
}