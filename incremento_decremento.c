// incremento_decremento.c
#include <stdio.h>
int main(){
    int i=0,j=0;
    
    printf("i=0\n");
    printf("i++: %d\n",i++);
    printf("i++: %d\n",i++);
    printf("i= %d\n",i);
    
    printf("\nj=0\n");
    printf("++j: %d\n",++j);
    printf("j++: %d\n",j++);
    printf("++j: %d\n",++j);
    printf("j= %d\n",j);
    
    
    i=10;j=10;
    
    printf("\ni=10\n");
    printf("i--: %d\n",i--);
    printf("i--: %d\n",i--);
    printf("i= %d\n",i);
    
    
    printf("\nj=10\n");
    printf("--j: %d\n",--j);
    printf("j--: %d\n",j--);
    printf("--j: %d\n",--j);
    printf("j= %d\n",j);
    
    return 0;
}