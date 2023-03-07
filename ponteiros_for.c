// ponteiros_for.c
#include <stdio.h>
int main(){
    int valores[5],i;
    
    for(int i = 0;i < 5; i++){
        printf("Informe o %d/5 valor: ",(i+1));
        scanf("%d",&valores[i]);
    }
    
    printf("\n\nOs valores informados foram: \n");
    for(int i=0; i<5 ; i++)
        printf("(valores[%d]) %d\n",i,valores[i]);
    
    printf("\n\n");
    
    for(i=0; i<5 ; i++){
        printf("(&valores[%d]) %p \n",i,&valores[i]);
        printf("(valores) %p\n",valores);
        printf("(&valores) %p\n\n",&valores);
    }
    
    return 0;
}