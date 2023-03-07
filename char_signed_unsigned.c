// char_signed_unsigned.c
#include <stdio.h>
signed signed_letra;
// -127 a 127

unsigned char unsigned_letra;
// 0 a 255

char letrapadrao; 
// 1 byte = 8 bits ... 1 byte= 2^8 = 256 elementos


void espaco(){
    printf("\n=-=-=-=-=-=-=-=-=-=-=\n");
}

int main(){

    letrapadrao='A';
    printf("Char: %i",letrapadrao);
    printf("\nChar: %c",letrapadrao);
    
// N° acima de 127 dá erro.
// N° abaixo de -128 dá erro.

    letrapadrao=127; 
    printf("\n\nChar: %c",letrapadrao);
    printf("\nChar: %i",letrapadrao);

    letrapadrao=-30; 
    // Char: -30
    // Char: 
    printf("\n\nChar: %i",letrapadrao);    
    printf("\nChar: %c\n",letrapadrao); 

    espaco();
// qualquer número digitado não dará erro.
    signed_letra=30;   
    printf("\n\nSigned: %i",signed_letra);
    
    signed_letra=-30;   
    printf("\n\nSigned: %i\n",signed_letra); 
    
    espaco();
    
    unsigned_letra=513;
    printf("\nUnsigned: %i",unsigned_letra);
    
    unsigned_letra=-255;   
    printf("\n\nUnsigned: %i\n",unsigned_letra); 

// =====================================

// unsigned
// 0...255,0,1 ... 255
//      -1,0,+1

// -256 = 0
// 256=0

// =====================================

// 256 = 0
// 257 = 1

// 512 = 0
// 513 = 1

// -1 = 255
// -256 = 0
// - 257 = 255, ou seja, -257 = -1

// -512 = 0
// -513 = 255

// =====================================

// se for um número negativo, o programa
// diminui 256 pelo número negativo.

// O número 256 é igual a 0.
// O número 257 é igual a 1.
// O número 512 é igual a 0.
// O número 513 é igual a 1.


// O número 256 = 0.
// O número 257 = 1,mas dá erro.

// 257 = 1 ; 257-256= 1
// 513 = 1 ; 513-512= 1

// O número -256 = 0.
// O número -1 = 255.
// O número -257 = 255, ou seja, 
// ele tem valor de -1,mas dá erro.

// (-1) - (256) = 255
// (-257) - (-512) = 255 ; 
// -257 = -1
// (-513) - (-768) = 255 ;
// -513 = -1

    return 0;  
}
