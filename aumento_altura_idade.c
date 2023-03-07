// aumento_altura_idade.c

#include <stdio.h>
int main(){
    float john=1.5,david=1.1;
    int ano=1;
    
    while(john>=david)
        printf("\nAno: %d\njohn= %.2f\ndavid= %.2f\n",john+=.02,david+=.03,ano++);
    
    return 0;
}