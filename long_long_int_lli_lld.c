// long_long_int.c
#include <stdio.h>
int main(void) {

    long long int x= 2147483647;
    
    printf("Tamanho de x em bytes: %d\n",sizeof x);
    
    printf("Valor de x: %lld\n",x);
    x++;
    printf("Valor de x: %lli\n",x);
    
  return 0;
}