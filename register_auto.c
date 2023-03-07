// register_auto.c
#include <stdio.h>
int main() {

// Variáveis ​​de registro dizem ao 
// compilador para armazenar a variável
// no registro da CPU em vez de na
// memória. 

   register char x = 'S';
   register int a = 10;
   auto int b = 8;
   printf("The value of register variable b : %c\n",x);
   printf("The sum of auto and register variable : %d",(a+b));
   return 0;

}