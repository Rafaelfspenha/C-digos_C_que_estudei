// continue_break_for_if2.c
#include <stdio.h>
int main(){
    for(int x=0;x<=100;++x){
        if(x>=50 && x<60){
            printf("-\n");
            continue;
            printf("*");
        }
            
            
// O que está embaixo do continue não
// imprime.

        
        if(x>=80){
            break;
        }
        printf("%d\n",x);
    }
    return 0;
}