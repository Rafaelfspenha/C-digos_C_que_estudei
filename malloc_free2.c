// malloc_free2.c
#include <stdio.h>
int main() {

    int *p= (int *) malloc(sizeof(int));
    
    *p=1000;
    
    printf("%i",*p);
    
    free(p);
    
// se não especificar um valor o valor
// continuará 1000.
    
    int *r= (int *) malloc(sizeof (int));
    
    //*r=5;
    
    printf("\n\n%i\n",*r);
    
    return 0;
}