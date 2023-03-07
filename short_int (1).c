// short_int.c
#include <stdio.h>
int main(void) {

  short int valor;     // %hd

// os números abaixo se assemelham a 
// uma onda.


/*

0 ... 32767 = 32768

0=0 (+)
32767 = 32767
32768 = -32768 (+)
65536 = 0 (+)
98303 = 32767
98304 = -32768 (+)
131072 = 0 (+)    65536*2= 131072

-32769 = 32767 (-)
-65536 = 0 (-)
-98304 = -32768
-98305 = 32767

-65536 = 0
-131072 = 0
196608 = 0    131072+65536= 196608
-196608 = 0

*/
  printf ("\n\ntamanho do short int: %hd",sizeof(short int));
  printf("\n\nDigite o valor:  ");
  scanf("%hd",&valor);
  printf("\nValor: %hd\n",valor);

  
  
 
  
  return 0;
}