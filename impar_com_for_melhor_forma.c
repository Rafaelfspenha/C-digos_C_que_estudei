// impar_com_for_melhor_forma.c
#include <stdio.h> 


char main(){
    int a;
    
    /*
    for(a=1;a<100;a++){
        if(a%2 != 0)
            printf("%d\n",a);
    }
    */
    
    for(a=1;a<100;a+=2){
            printf("%d\n",a);
    }
    
    return 0;
}