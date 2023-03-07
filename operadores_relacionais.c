// operadores_relacionais.c
#include <stdio.h>
int main(){
    int x=10,y=5,z=7,k=7;
    printf("x=10\n");
    printf("y=5\n");
    printf("z=7\n");
    printf("k=7\n");
    printf("\n0 = falso e 1 = verdadeiro\n");
    
    printf("\nx > y = %d (maior)",x>y); 
    printf("\nx < y = %d (menor)\n",x<y);
    
    printf("\nz == k = %d (igual)",z==k);
    printf("\nz != k = %d (diferente)\n",z!=k);
    
    printf("\nz >= x = %d (maior ou igual)",z>=x);
    printf("\nz <= x = %d (menor ou igual)\n",z<=x);
   
    return 0;
}