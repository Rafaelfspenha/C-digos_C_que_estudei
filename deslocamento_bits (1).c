// deslocamento_bits.c
#include <stdio.h>

int main(){
    int num=2; 
    
    // 2 tem valor binário de 0000 0010
    // 8 tem valor binário de 0000 1000
    
    printf("num: %d\n\n",num);
    
    // 0000 0010
    // num = num << 2;
    // 0000 1000
    
    num <<=  2;
    
    printf("num: %d\n\n",num);
    
    // 0000 1000
    // num = num >> 2;
    // 0000 0010
    
    num >>= 2;
    
    printf("num: %d\n",num);
    
    return 0;
}