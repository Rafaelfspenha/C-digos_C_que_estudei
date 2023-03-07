// bytes_arrays_for.c
#include <stdio.h>
int main(){
    
    int valores[5]={1,2,3,4,5},i;
    
    for(int i=0; i<5 ; i++)
        printf("O valor %d tem %d bytes\n",valores[i],sizeof(valores[i]));
    
    printf("\nO array valores possui %d bytes\n\n",sizeof(valores));
    
    
    for(i=0;i<5;i++){
        printf("endereço de memória de valores[%d]: %p\n",i,valores[i]);
    }
    
    printf("\n*(valores) tem valor %d e o seu endereço de memória é %p\n",*(valores),*(valores));
    // *(valores) = valores[0]
    printf("\n*(valores+1) tem valor %d e o seu endereço de memória é %p\n",*(valores+1),*(valores+1));
     // *(valores+1) = valores[1]
    return 0;
}