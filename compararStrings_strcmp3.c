// compararStrings_strcmp3.c
#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50]={"zi"};
    char palavra2[50]={"bom dia"};
    
    printf("Resultado: %d\n\n",strcmp(palavra1,palavra2)==0);
    // 1 == 0 = falso(0)
/*
* é como se strcmp perguntasse se
* as strings são diferentes.
*
* As strings são diferentes?
* não, são iguais.
* diferentes == iguais = falso(0)
*
* As strings são diferentes?
* sim, são diferentes.
* diferentes = diferentes = verdadeiro(1)
*
* strings iniciadas pela letra 'a'
* tem menor valor.
*
* strings iniciadas pela letra 'z'
* tem menor valor.
*/

    printf("Resultado: %d\n",strcmp(palavra1,palavra2));
/*
* string1 > string2
* se a 1° string for maior que a 2° 
* string, então aparecerá um número 
* positivo.
*/
    printf("Resultado: %d\n\n",strcmp(palavra2,palavra1));
/*
* string1 < string2
* se a 1° string for menor que a 2° 
* string, então aparecerá um número 
* negativo.
*
*
* na maioria das ides
*
* 0 => quando as strings forem iguais.
*
* -1 => quando a string1 for menor que a
* string2.
*
* 1 => quando a string1 for maiot que a
* string2.
*/
    return 0;
}