// dois_for_break_if.c
#include <stdio.h>
int main(){

    int i,j;

    for(i=0;i<10;i++){
        printf("\n\n");
        for(j=0;j<10; j++) {
            if (j==5) {
                break; 
            }
            printf("%d\n",j);
        }
        /*
        if(j==5){
            break; 
        }
        */
    }
}