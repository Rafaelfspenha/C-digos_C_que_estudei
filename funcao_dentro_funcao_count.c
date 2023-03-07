// funcao_dentro_funcao_count.c
#include <stdio.h>

int count;

    void func1();
    void func2();

    void main(void){
        count=100;
        func1();
    }
    
    void func1(){
        int temp;
        temp=count;
        func2();
        printf("\ncount= %d\n",count);
    }
    
    void func2(){
        int count;
        for(count=1;count<10;count++){
            printf(".");
        }
    }
