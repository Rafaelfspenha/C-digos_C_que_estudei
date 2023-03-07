// for_loop_if.c

#include <stdio.h>
int main(){

    int ch='\0';
    
    for(;;){
        ch=getchar();
        if(ch == 'a'){
            break;
        }
    }
    return 0;
}

    