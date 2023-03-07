// diferencas_for_while_do_while.c
#include <stdio.h>
int main() {

    int i=0;
    
    printf("for: ");
    for(i=0;i<=10;i++) printf("%d ",i);
        
    i=0;
    printf("\n\nwhile: ");
    
    while(i<=10) printf("%d ",i++);
    
    i=0;
    printf("\n\ndo while: ");
    
    do{printf("%d ",i++);}while(i<=10);
    
    printf("\n");
    
    return 0;
}