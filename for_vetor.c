// for_vetor.c
#include <stdio.h>
int main(void) {
    char teste[]={'b','r','a','s','i','l'};
    
    int i;
    
    for(i=0;i<10000000000000;++i) 
    {
        printf("%c",teste[i]);
    }
    
    printf("\n");
    
    return 0;
}
