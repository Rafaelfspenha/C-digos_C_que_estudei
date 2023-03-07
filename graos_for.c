// graos_for.c 
#include <stdio.h>
int main() {
    
    double x,y;
    short int i;
    
    for(i=1,x=1;i<=64;i++,x*=2){
        printf("%hd° quadro: %.0lf\n",i,x);
        y+=x;
      // o windows tem dificuldade de ler o long double
     //   __mingw_printf(); // para windows, quando for long double 
    }
    
    printf("\nTotal de grãos: %.0lf\n",y);
   // __mingw_printf("\nTotal de grão s: %.0Lf"); // para windows
    return 0;
}